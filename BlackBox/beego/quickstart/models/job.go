package models

import "github.com/astaxie/beego/orm"

type Scope struct {
	Name string
}

type Job struct {
	Id   int64
	Name string
	//Scopes []Scope `orm:reverse(many)`
}

func int() {
	orm.RegisterModel(new(Job))
}
