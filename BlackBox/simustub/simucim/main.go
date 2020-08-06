package main

import (
	"fmt"
	"simucim/common"
	"sync"
	"time"
)

func init() {

}

func main() {
	fmt.Println("CIM simu started!!")
	wg := sync.WaitGroup{}
	common.WaitDBReady()
	common.WaitNatsReady()
	NatsSub()
	wg.Add(1)
	StartCim(&wg)

	//wg.Wait()
	for {
		time.Sleep(time.Second)
		fmt.Println("In Cim main loop ... ")
	}
}
