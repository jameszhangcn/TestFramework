package main

import (
	"context"
	"fmt"
	"simuctl/common"
	"simuctl/mail"
	"simuctl/scopeBearer"
	"simuctl/scopeE1"
)

//add the test scope and scenario here
func init() {
	common.TC_TABLE = make(map[string]interface{})
	common.TC_TABLE["TC_E1INTERFACE_E1_SETUP_NORMAL"] = scopeE1.TC_E1INTERFACE_E1_SETUP_NORMAL
	common.TC_TABLE["TC_E1INTERFACE_E1_SETUP_FAILURE"] = scopeE1.TC_E1INTERFACE_E1_SETUP_FAILURE
	common.TC_TABLE["TC_E1INTERFACE_E1_SETUP_RESET"] = scopeE1.TC_E1INTERFACE_E1_SETUP_RESET
	common.TC_TABLE["TC_BEARERCONTEXT_BEARER_SETUP_NORMAL"] = scopeBearer.TC_BEARERCONTEXT_BEARER_SETUP_NORMAL
	common.TC_TABLE["TC_BEARERCONTEXT_BEARER_SETUP_FAILURE"] = scopeBearer.TC_BEARERCONTEXT_BEARER_SETUP_FAILURE
	common.TC_TABLE["TC_BEARERCONTEXT_BEARER_RELEASE"] = scopeBearer.TC_BEARERCONTEXT_BEARER_RELEASE

}

func prepareTest() {
	//init the event queue for nats
	common.GlobalDataQueue = common.NewDataQueue(1024)
	fmt.Println("Prepare testing")
}

func main() {
	parent := context.Background()

	defer func() {
		fmt.Println("Main stopped!!")
	}()
	mail.InitMail()
	common.WaitDBReady()
	common.WaitNatsReady()

	prepareTest()
	//for testing
	common.AddJobToDB(parent)
	//get job from etcd
	common.GetJobFromDB(parent)
	//save job to local
	//loop all registed test case, if match jobs in etcd, run the case
	common.RunJob(parent)

	//send the result email
	common.PublishEmail()
}
