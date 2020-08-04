package common

import (
	"container/list"
	"context"
	"encoding/json"
	"fmt"
	"time"
)

//ExptProc : the expect msg behaviour
type ExptProc struct {
	MsgType   string `json:"msgType"`
	Behaviour string `json:"behaviour"`
	RespPara  string `json:"respPara"` //this is the filename of parameter json
	NeedCheck string `json:"needCheck"`
	State     string `json:"state"`
}

type ScenarioMgt struct {
	JobID        int
	ScopeName    string
	ScenarioName string
	ProcList     *list.List
	TimeOut      int    //seconds
	State        string //INIT, SUCCESS, TIMEOUT
	WillRun      string //RUN, SKIP
}

var GlobalScenarioMgmt *ScenarioMgt

var TC_TABLE map[string]interface{}

var pathJobScenario string

func AddProc(msg, behr, rsp, is_check string) {

	if !IsWillRun() {
		//the case will not be added
		return
	}
	exptProc := &ExptProc{
		MsgType:   msg,
		Behaviour: behr,
		RespPara:  rsp,
		NeedCheck: is_check,
		State:     "INIT",
	}

	GlobalScenarioMgmt.ProcList.PushBack(exptProc)

	if rsp != "" {
		//push the response para to DB
		fmt.Println("Proc resp json: ", rsp)
	}
}

//AddTrigger : this function add the spontaneout msg and the trigger condition
//eg. some msg received, or tigger a failure after some time
func AddTrigger(service, msgType, condition string) {
	fmt.Println("AddTrigger")
}

func GetScenarioMgt(sco, sce string) {
	GlobalScenarioMgmt = new(ScenarioMgt)
	GlobalScenarioMgmt.ScopeName = sco
	GlobalScenarioMgmt.ScenarioName = sce
	GlobalScenarioMgmt.ProcList = list.New()
	GlobalScenarioMgmt.TimeOut = 60 //second
	GlobalScenarioMgmt.JobID = jobInstance.JobID
	GlobalScenarioMgmt.WillRun = "RUN"
	GlobalScenarioMgmt.State = "INIT"
	pathJobScenario = "JobScenario" + string(jobInstance.JobID)

	InitScenResult()
}

func isAllProcFinished() bool {
	var proc *ExptProc
	for item := GlobalScenarioMgmt.ProcList.Front(); nil != item; item = item.Next() {
		fmt.Println(item.Value)
		proc = item.Value.(*ExptProc)
		fmt.Println("The expt proc:", proc)
		fmt.Println("The expt state:", proc.State)
		if proc.State == "INIT" {
			return false
		}
	}
	return true
}

func SetUp() {
	time.Sleep(3 * time.Second)
}

func CleanUp() {
	time.Sleep(3 * time.Second)
}

func ShowScenResult() {
	var proc *ExptProc
	fmt.Println("The result for ", GlobalScenarioMgmt.ScenarioName, GlobalScenarioMgmt.State)
	for item := GlobalScenarioMgmt.ProcList.Front(); nil != item; item = item.Next() {
		fmt.Println(item.Value)
		proc = item.Value.(*ExptProc)
		fmt.Println("The proc:", proc, proc.State)
	}
}

func SaveScenResult() {
	for i := 0; i < len(jobInstance.Scopes); i++ {
		scope := &jobInstance.Scopes[i]
		for j := 0; j < len(scope.Scenarios); j++ {
			scenario := &scope.Scenarios[j]
			//fmt.Println("Save Scen result: ", GlobalScenarioMgmt.ScopeName, GlobalScenarioMgmt.ScenarioName)
			//fmt.Println("Save Scen result: ", scope.Name, scenario.Name)
			if scope.Name == GlobalScenarioMgmt.ScopeName && scenario.Name == GlobalScenarioMgmt.ScenarioName {
				fmt.Println("Results saved: ", scenario.Name, GlobalScenarioMgmt.State)
				scenario.State = GlobalScenarioMgmt.State
				return
			}
		}
	}
}

func InitScenResult() {
	for i := 0; i < len(jobInstance.Scopes); i++ {
		scope := &jobInstance.Scopes[i]
		for j := 0; j < len(scope.Scenarios); j++ {
			scenario := &scope.Scenarios[j]
			//fmt.Println("Save Scen result: ", GlobalScenarioMgmt.ScopeName, GlobalScenarioMgmt.ScenarioName)
			//fmt.Println("Save Scen result: ", scope.Name, scenario.Name)
			if scope.Name == GlobalScenarioMgmt.ScopeName && scenario.Name == GlobalScenarioMgmt.ScenarioName {
				fmt.Println("Results Init: ", scenario.Name, GlobalScenarioMgmt.State)
				scenario.State = "INIT"
				return
			}
		}
	}
}

func SetScenarioTO(to int) {
	GlobalScenarioMgmt.TimeOut = to
}

func SetScenarioState(state string) {
	GlobalScenarioMgmt.State = state
}

func SetWillRun(run string) {
	GlobalScenarioMgmt.WillRun = run
}

func IsWillRun() bool {
	if GlobalScenarioMgmt.WillRun == "RUN" {
		return true
	}
	return false
}

func PubScenario() {
	fmt.Println("PubScenario")
	value, err := json.Marshal(GlobalScenarioMgmt)
	if err != nil {
		fmt.Println(err)
	}
	sendToDB(context.Background(), pathJobScenario, value)
}

func WaitAllFinish() {
	ch := make(chan string)
	//start timer
	duration := GlobalScenarioMgmt.TimeOut
	go func() {
		time.Sleep(time.Duration(duration) * time.Second)
		fmt.Println("In WaitAllFinish ", duration)
		ch <- "timeout"
	}()

	tickTimer := time.NewTicker(2 * time.Second)

WAIT:
	for {
		select {
		case <-ch:
			fmt.Println("TestCase ", GlobalScenarioMgmt.ScenarioName, " wait Timeout")
			GlobalScenarioMgmt.State = "TIMEOUT"
			break WAIT
		case <-tickTimer.C:
			{
				if isAllProcFinished() {
					fmt.Println("all proc done for scenario ", GlobalScenarioMgmt.ScenarioName, "Finished")
					break WAIT
				}
				fmt.Println("Waiting all proc done for scenario ", GlobalScenarioMgmt.ScenarioName)
			}
		}
	}
}
