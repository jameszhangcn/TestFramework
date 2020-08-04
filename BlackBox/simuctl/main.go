package main

import (
	"context"
	"fmt"
	common "simuctl/common"
	scope_bearer "simuctl/scopeBearer"
	scope_e1 "simuctl/scopeE1"
	"time"
)

//add the test scope and scenario here
func init() {
	common.TC_TABLE = make(map[string]interface{})
	common.TC_TABLE["TC_E1INTERFACE_E1_SETUP_NORMAL"] = scope_e1.TC_E1INTERFACE_E1_SETUP_NORMAL
	common.TC_TABLE["TC_E1INTERFACE_E1_SETUP_FAILURE"] = scope_e1.TC_E1INTERFACE_E1_SETUP_FAILURE
	common.TC_TABLE["TC_E1INTERFACE_E1_SETUP_RESET"] = scope_e1.TC_E1INTERFACE_E1_SETUP_RESET
	common.TC_TABLE["TC_BEARERCONTEXT_BEARER_SETUP_NORMAL"] = scope_bearer.TC_BEARERCONTEXT_BEARER_SETUP_NORMAL
	common.TC_TABLE["TC_BEARERCONTEXT_BEARER_SETUP_FAILURE"] = scope_bearer.TC_BEARERCONTEXT_BEARER_SETUP_FAILURE
	common.TC_TABLE["TC_BEARERCONTEXT_BEARER_RELEASE"] = scope_bearer.TC_BEARERCONTEXT_BEARER_RELEASE

}

func prepareTest() {
	fmt.Println("Prepare testing")
}

func main() {
	parent := context.Background()

	defer func() {
		fmt.Println("Main stopped!!")
	}()
	common.WaitDBReady()
	common.WaitNatsReady()

	prepareTest()
	//for testing
	common.AddJobToDB(parent)
	//get job from etcd
	common.GetJobFromDB(parent)
	//save job to local
	//loop all registed test case, if match jobs in etcd, run the case
	go common.RunJob(parent)

	for {
		time.Sleep(time.Second)
		fmt.Println("In main loop ...")
	}
}
