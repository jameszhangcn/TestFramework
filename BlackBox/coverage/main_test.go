package main

import (
	"flag"
	"testing"
)

//This file is mandatory as otherwise the binary will not generated correctly.

var systemTest *bool
var configDirPath string

//Init config path flag
func init() {
	systemTest = flag.Bool("systemTest", false, "Set to true when running system tests")
	flag.StringVar(&configDirPath, "configDir", "", "path to additional filebeat configuration directory with .yml files")
}

//Test started when the test binary is started. Only calls main.
func TestSystem(t *testing.T) {
	if *systemTest {
		main()
	}
}
