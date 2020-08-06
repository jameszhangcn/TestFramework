package main

import (
	"encoding/json"
	"fmt"
	"simubcc/common"

	"github.com/nats-io/nats.go"
)

const (
	subjectSub = "SIMUBCC-S"
	subjectPub = "SIMUBCC-P"
)

func simuctlHandler(msg *nats.Msg) {
	fmt.Println("nats cucpHandler received: ", msg)
	err := json.Unmarshal(msg.Data, &common.Scenario)
	if err != nil {
		fmt.Println(err)
	}
	fmt.Println(&common.Scenario)
}

func NatsSub() {
	common.NatsMsgSub(subjectSub, simuctlHandler)
}
