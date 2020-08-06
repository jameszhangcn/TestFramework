package main

import (
	"fmt"
	"simubcc/common"
	"time"
)

func init() {

}

func main() {
	fmt.Println("BCC simu started!!")
	common.WaitDBReady()
	common.WaitNatsReady()
	NatsSub()
	common.StartGrpc()

	for {
		time.Sleep(5 * time.Second)
		fmt.Println("loop BCC main ... ")
	}
}
