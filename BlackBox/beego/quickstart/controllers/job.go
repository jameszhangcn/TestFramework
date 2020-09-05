package controllers

import (
	"fmt"
	"quickstart/models"
	"time"

	"github.com/astaxie/beego"
)

var jobDbName = "job"

type MainController struct {
	beego.Controller
}

func (c *MainController) Head() {
	fmt.Println("Main page: ")
	c.TplName = "index.html"
}

func (c *MainController) JobQuery() {
	jobs := models.GetJobList()
	fmt.Println("Job Query: ", jobs)
	c.Data["JobID"] = jobs[0].ID
	c.Data["JobName"] = jobs[0].Name
	c.TplName = "query.html"
}

func (c *MainController) JobAdd() {
	curDate := time.Now().Format("2020-09-04 18:00:00")
	models.AddJob("test-" + curDate)
	c.TplName = "query.html"
}
