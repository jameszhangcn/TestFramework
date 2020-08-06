package common

import (
	"context"
	"encoding/json"
	"errors"
	"fmt"
	"reflect"
	"simuctl/mail"
	"time"
)

type Scenario struct {
	Name  string `json:"name", omitempty`
	State string
}
type Scope struct {
	Name      string     `json:"name, omitempty"`
	Scenarios []Scenario `json:"scenarios, omitempty"`
}
type Job struct {
	JobID  int     `json:"jobid"`
	Scopes []Scope `json:"scopes, omitempty"`
}

var jobInstance *Job
var pathEtcdWaitingJob string

func init() {
	pathEtcdWaitingJob = "waitingJob"
}

func AddJobToDB(ctx context.Context) {
	var scope *Scope
	var scenario *Scenario

	job := new(Job)
	job.JobID = 10001
	job.Scopes = make([]Scope, 0)

	scope = new(Scope)
	scope.Name = "E1INTERFACE"
	scope.Scenarios = make([]Scenario, 0)

	scenario = new(Scenario)
	scenario.Name = "E1_SETUP_NORMAL"
	scope.Scenarios = append(scope.Scenarios, *scenario)

	scenario = new(Scenario)
	scenario.Name = "E1_SETUP_FAILURE"
	scope.Scenarios = append(scope.Scenarios, *scenario)

	scenario = new(Scenario)
	scenario.Name = "E1_SETUP_RESET"
	scope.Scenarios = append(scope.Scenarios, *scenario)

	job.Scopes = append(job.Scopes, *scope)

	scope = new(Scope)
	scope.Name = "BEARERCONTEXT"
	scope.Scenarios = make([]Scenario, 0)

	scenario = new(Scenario)
	scenario.Name = "BEARER_SETUP_NORMAL"
	scope.Scenarios = append(scope.Scenarios, *scenario)

	scenario = new(Scenario)
	scenario.Name = "BEARER_SETUP_FAILURE"
	scope.Scenarios = append(scope.Scenarios, *scenario)

	scenario = new(Scenario)
	scenario.Name = "BEARER_RELEASE"
	scope.Scenarios = append(scope.Scenarios, *scenario)

	job.Scopes = append(job.Scopes, *scope)

	value, err := json.Marshal(job)
	if err != nil {
		fmt.Println(err)
	}
	SendToDB(ctx, pathEtcdWaitingJob, value)
}

func GetJobFromDB(ctx context.Context) {
	fmt.Println("getJobFromDB")

	jobInstance = new(Job)

	data := getFromDB(ctx, pathEtcdWaitingJob)
	fmt.Println("We get ", data)
	fmt.Println(data)
	err := json.Unmarshal(data, jobInstance)
	if err != nil {
		fmt.Println(err)
	}
	fmt.Println(jobInstance)
}

func Call(m map[string]interface{}, name string, params ...interface{}) (result []reflect.Value, err error) {

	f := reflect.ValueOf(m[name])
	if len(params) != f.Type().NumIn() {
		err = errors.New("The number of params is not adapted.")
		return
	}
	fmt.Println("In Call: ", name)
	in := make([]reflect.Value, len(params))
	for k, param := range params {
		in[k] = reflect.ValueOf(param)
	}
	result = f.Call(in)
	return
}

func RunJob(ctx context.Context) {
	for _, scope := range jobInstance.Scopes {
		for _, scenario := range scope.Scenarios {
			name := "TC_" + scope.Name + "_" + scenario.Name
			fmt.Println("runJob testcase: ", name)
			scenario.State = "INIT"
			if _, ok := TC_TABLE[name]; ok != true {
				fmt.Println("TC not found: ", name)
				continue
			}
			if result, err := Call(TC_TABLE, name, scope.Name, scenario.Name); err == nil {
				fmt.Println("result", result, "err", err)
			}
		}
	}
	ShowJobResult()
}

func ShowJobResult() {
	for _, scope := range jobInstance.Scopes {
		fmt.Println("Scope: ", scope.Name)
		for _, scenario := range scope.Scenarios {
			if scenario.State != "INIT" {
				fmt.Printf("| %-20s| %-20s|\n", scenario.Name, scenario.State)
			}
		}
	}
}

func PublishEmail() {
	result := make([]string, 0)
	for _, scope := range jobInstance.Scopes {
		fmt.Println("Scope: ", scope.Name)
		for _, scenario := range scope.Scenarios {
			if scenario.State != "INIT" {
				fmt.Printf("| %-30s| %-20s|\n", scenario.Name, scenario.State)
				ret := fmt.Sprintf("| %-30s| %-20s|\n", scenario.Name, scenario.State)
				result = append(result, ret)
			}
		}
	}

	subject := "BlackBoxTesting: " + time.Now().String()
	mail.SendMultiLineMail(subject, result)

}
