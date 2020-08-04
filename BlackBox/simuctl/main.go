package main

import (
	"container/list"
	"context"
	"fmt"
	"time"
)

type TestScenario interface {
	Add(expt_msg string, behavior string) error
}

type ScenarioOld struct {
	name     string
	testFunc func(*Scenario)
	timeOut  uint32
	state    string
}

type ScenarioMgt struct {
	scopeName    string
	scenarioList *list.List
	state        bool
}

//ExptProc : the expect msg behaviour
type ExptProc struct {
	MsgType   string `json:"msgType"`
	Behaviour string `json:"behaviour"`
	RespPara  string `json:"respPara"`
	NeedCheck bool   `json:"needCheck"`
	State     string `json:"state"`
}

var (
	mgt *ScenarioMgt
)

func (sm *ScenarioMgt) AddScope(name string) {
	sm.scopeName = name
	sm.state = true
	sm.scenarioList = list.New()
}

/*
func (sm *ScenarioMgt) AddScenario(name string, timeLen uint32, execFn func(sce *Scenario)) error {
	if sm.state != true {
		return errors.New("scenario list not inited!")
	}
	sc := &Scenario{
		name:     name,
		testFunc: nil,
		state:    "init",
		timeOut:  timeLen,
	}
	sc.testFunc = execFn
	sm.scenarioList.PushBack(sc)
	return errors.New("Add scenario success")
}

func AddProc(list *list.List, msg, proc, behr string) {
	//exptProc := &comm.ExptProc{
	//msgType:   msg,
	//procedure: proc,
	//behaviour: behr,
	//}
	//exptProc := new(comm.ExptProc)
	exptProc := &ExptProc{}
	exptProc.msgType = msg
	list.PushBack(exptProc)
	simudb.AddExptProc(msg, proc, behr)
	simudb.GetAllExptProc()
}

func prepareTest(mg *ScenarioMgt) error {
	mg.AddScope("TestE1Interface")
	mg.AddScenario("TestE1SetupReq", 120, testE1SetupReq)
	mg.AddScenario("TestE1Release", 10, testE1Release)
	mg.AddScenario("TestE1Reset", 10, testE1Reset)
	return nil
}
func showTestResults(mg *ScenarioMgt) {
	var sc *Scenario
	fmt.Println("Show all the Test results:")
	if mg.state {
		for item := mg.scenarioList.Front(); nil != item; item = item.Next() {
			fmt.Println(item.Value)
			sc = item.Value.(*Scenario)
			fmt.Println(sc.name, sc.state)
		}
	}
}

func execTest(mg *ScenarioMgt) error {
	//record start_time end_time
	var sc *Scenario
	if mg.state {
		for item := mg.scenarioList.Front(); nil != item; item = item.Next() {
			fmt.Println(item.Value)
			sc = item.Value.(*Scenario)
			fmt.Println(sc.name)
			sc.testFunc(sc)
		}
	}
	showTestResults(mg)
	return nil
}

func terminateTest(mg *ScenarioMgt) error {
	return nil
}

func getMgt() *ScenarioMgt {
	return &ScenarioMgt{
		scopeName:    "",
		scenarioList: nil,
		state:        false,
	}
}

//SimuTest : entry func
func SimuTest(exit chan struct{}) {
	mgt = getMgt()
	err := prepareTest(mgt)
	if err != nil {
		fmt.Println("SimuTest prepare test failed!")
		return
	}
	err = execTest(mgt)
	if err != nil {
		fmt.Println("SimuTest exec test failed!")
		return
	}
	err = terminateTest(mgt)
	if err != nil {
		fmt.Println("SimuTest terminate test failed!")
		return
	}
	fmt.Println("All test cases finished, Notify the Main process to exit.")
	close(exit) //TODO not sent in the debuging stage
}
*/

func TC_E1INTERFACE_E1_SETUP_NORMAL() {
	fmt.Println("testing TC_E1INTERFACE_E1-SETUP-NORMAL")
}

func TC_E1INTERFACE_E1_SETUP_FAILURE() {
	fmt.Println("testing TC_E1INTERFACE_E1-SETUP-FAILURE")
}

func TC_E1INTERFACE_E1_SETUP_RESET() {
	fmt.Println("testing TC_E1INTERFACE_E1-SETUP-RESET")
}

func TC_BEARERCONTEXT_BEARER_SETUP_NORMAL() {
	fmt.Println("testing TC_BEARERCONTEXT_BEARER-SETUP-NORMAL")
}

func TC_BEARERCONTEXT_BEARER_SETUP_FAILURE() {
	fmt.Println("testing TC_BEARERCONTEXT_BEARER-SETUP-FAILURE")
}

func TC_BEARERCONTEXT_BEARER_RELEASE() {
	fmt.Println("testing TC_BEARERCONTEXT_BEARER-RELEASE")
}

var TC_TABLE map[string]interface{}

func init() {
	TC_TABLE = make(map[string]interface{})
	TC_TABLE["TC_E1INTERFACE_E1_SETUP_NORMAL"] = TC_E1INTERFACE_E1_SETUP_NORMAL
	TC_TABLE["TC_E1INTERFACE_E1_SETUP_FAILURE"] = TC_E1INTERFACE_E1_SETUP_FAILURE
	TC_TABLE["TC_E1INTERFACE_E1_SETUP_RESET"] = TC_E1INTERFACE_E1_SETUP_RESET
	TC_TABLE["TC_BEARERCONTEXT_BEARER_SETUP_NORMAL"] = TC_BEARERCONTEXT_BEARER_SETUP_NORMAL
	TC_TABLE["TC_BEARERCONTEXT_BEARER_SETUP_FAILURE"] = TC_BEARERCONTEXT_BEARER_SETUP_FAILURE
	TC_TABLE["TC_BEARERCONTEXT_BEARER_RELEASE"] = TC_BEARERCONTEXT_BEARER_RELEASE

}

func prepareTest() {
	fmt.Println("Prepare testing")
}

func main() {
	parent := context.Background()
	waitDBReady()
	prepareTest()
	//for testing
	addJobToDB(parent)
	//get job from etcd
	getJobFromDB(parent)
	//save job to local
	//loop all registed test case, if match jobs in etcd, run the case
	go runJob(parent)

	for {
		time.Sleep(time.Second)
		fmt.Println("In SimuCtl main...")
	}
}
