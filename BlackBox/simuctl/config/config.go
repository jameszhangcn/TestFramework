package config

import (
	"context"
	"encoding/json"
	"fmt"
	"io/ioutil"
	"simuctl/common"
)

var vsConfigJson = "./config/DAY1_vs.json"
var vsConfigJsonUpdate = "./config/DAY1_vs_update.json"
var threegppConfigJson = "./config/DAY1_3GPP.json"

var dayOneConfigPath string

var (
	Namespace        = "default"
	MicroserviceName = "CUUP"
)

func LoadDay1Config() {
	dayOneConfigPath = "config/" + Namespace + "/" + MicroserviceName

	//send the day1 config
	vsConfig, err := ioutil.ReadFile(vsConfigJson)
	if err != nil {
		fmt.Println("readfile", err)
		return
	}

	//push to ETCD
	value, err := json.Marshal(vsConfig)
	if err != nil {
		fmt.Println(err)
	}
	common.SendToDB(context.Background(), dayOneConfigPath, value)

	threeGppConfig, err := ioutil.ReadFile(threegppConfigJson)
	if err != nil {
		fmt.Println("readfile", err)
		return
	}

	value, err = json.Marshal(threeGppConfig)
	if err != nil {
		fmt.Println(err)
	}
	common.SendToDB(context.Background(), dayOneConfigPath, value)
	//push to ETCD
}

func SendConfigPatch() {
	fmt.Println("SendConfigPatch")
}
