package scopeE1

import (
	"fmt"
	common "simuctl/common"
)

func TC_E1INTERFACE_E1_SETUP_NORMAL(sco, sce string) {
	fmt.Println("testing TC_E1INTERFACE_E1-SETUP-NORMAL")
	common.GetScenarioMgt(sco, sce)
	common.SetScenarioTO(10)
	common.SetWillRun("RUN")

	common.SetUp()

	common.AddProc("IS-CONFIGURED", "RESPONSE", "", "FALSE")
	common.AddProc("GNB-CU-UP-E1-SETUP-REQUEST", "RESPONSE", "", "FALSE")

	//publish the Test scenario to DB
	common.PubScenario()

	common.WaitAllFinish()
	common.ShowScenResult()
	common.SaveScenResult()

	common.CleanUp()
}

func TC_E1INTERFACE_E1_SETUP_FAILURE(sco, sce string) {
	fmt.Println("testing TC_E1INTERFACE_E1-SETUP-FAILURE")
	common.GetScenarioMgt(sco, sce)
	common.SetScenarioTO(3)
	common.SetWillRun("SKIP")

	common.SetUp()

	common.AddProc("UP-E1-RELEASE-REQ", "RESPONSE", "", "FALSE")
	//publish the Test scenario to DB
	common.PubScenario()

	common.WaitAllFinish()

	common.ShowScenResult()
	common.SaveScenResult()

	common.CleanUp()
}

func TC_E1INTERFACE_E1_SETUP_RESET(sco, sce string) {
	fmt.Println("testing TC_E1INTERFACE_E1-SETUP-RESET")
	common.GetScenarioMgt(sco, sce)

	common.SetScenarioTO(5)
	common.SetUp()
	common.AddProc("UP-E1-RESET-REQ", "RESPONSE", "", "FALSE")
	//publish the Test scenario to DB
	common.PubScenario()

	common.WaitAllFinish()
	common.ShowScenResult()
	common.SaveScenResult()

	common.CleanUp()
}
