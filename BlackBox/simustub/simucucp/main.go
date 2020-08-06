package main

import (
	"fmt"
	"simucucp/common"
	"simucucp/sctp"
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
	JobID        int        `json:"jobID"`
	ScopeName    string     `json:"scope"`
	ScenarioName string     `json:"scenario`
	Procs        []ExptProc `json:"procs`
}

func init() {

}

func main() {
	fmt.Println("CUCP simu started!!")
	common.WaitDBReady()
	common.WaitNatsReady()
	NatsSub()

	sctp.RegisterListener(E1MsgHandler)
	sctp.StartSctpServer()
	for {
		time.Sleep(5 * time.Second)
		fmt.Println("loop CUCP main ... ")
	}
}
