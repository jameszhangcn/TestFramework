package main

type Proc struct {
	Name string
}
type Scenario struct {
	Name  string `json:"name"`
	Procs []Proc `json:"procs`
}
type Scope struct {
	Name      string     `json:"name"`
	Scenarios []Scenario `json:"scenarios"`
}
type Job struct {
	JobID  string  `json:"jobid"`
	Scopes []Scope `json:"scopes"`
}
