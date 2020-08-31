package main

import (
	"fmt"
	_ "quickstart/routers"

	"quickstart/models"

	"github.com/astaxie/beego"
	"github.com/astaxie/beego/orm"
	_ "github.com/lib/pq"
)

func init() {
	orm.RegisterDriver("postgerss", orm.DRPostgres)
	orm.RegisterDataBase("default", "postgres", "host=10.104.82.1 port=5432 user=test password=test dbname=dbtest sslmode=disable")
	orm.RegisterModel(new(models.Job))
	orm.SetMaxIdleConns("default", 10)
	orm.SetMaxOpenConns("default", 50)
	//auto create table
	orm.RunSyncdb("default", false, true)
}

func main() {
	orm.Debug = true
	o := orm.NewOrm()
	o.Using("default")
	job := new(models.Job)
	job.Name = "test_job"
	//scopes := make([]models.Scope, 1)
	//scopes[0].Name = "test_scope"
	//job.Scopes = scopes
	fmt.Println(o.Insert(job))
	beego.Run()
}
