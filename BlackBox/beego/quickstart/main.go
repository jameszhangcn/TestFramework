package main

import (
	"net/http"
	_ "quickstart/routers"

	"quickstart/models"

	"github.com/astaxie/beego"
	"github.com/astaxie/beego/cache"
	"github.com/astaxie/beego/orm"
	_ "github.com/lib/pq"
)

var (
	joblist *cache.Cache
)

func init() {

	//cache
	//joblist = cache.NewCache("test", "cache.conf")
	//joblist.Every = 0
	//joblist.Start()

	beego.Info("Init routers ")
}

var FilterUser = func(w http.ResponseWriter, r *http.Request) {
	if r.URL.User == nil || r.URL.User.Username() != "admin" {
		http.Error(w, "", http.StatusUnauthorized)
	}
}

func main() {
	orm.Debug = true
	models.ConnDB()
	models.AddJob(models.Job{0, "test-job1"})
	models.AddJob(models.Job{0, "test-job2"})
	models.AddJob(models.Job{0, "test-job3"})
	jobs := models.GetJobList()
	beego.Info("Get jobs: ", jobs)
	//beego.ValidRouter(FilterUser)

	//beego.Info("test beego cache")
	/*
		if joblist.IsExist("testCache1") {
			beego.Info("job exist")
		} else {
			err := joblist.Put("testCache1", "Job1", 0)
			if err != nil {
				//beego.Info(err)
			} else {
				beego.Info("Put Job1 to cache")
			}
		}*/
	beego.Run()
}
