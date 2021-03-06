package models

import (
	"fmt"
	"net"
	"os"
	"strconv"
	"time"

	"github.com/astaxie/beego/orm"
)

var (
	ormJob   orm.Ormer
	mypsqlIP string
)

const testPsqlIP = "10.10.0.50"

type Scope struct {
	Name string
}

type Job struct {
	ID   int64
	Name string
	//Scopes []Scope `orm:reverse(many)`
}

func init() {

}

func ConnDB() {
	getDBIp()

	orm.RegisterModel(new(Job))

	orm.RegisterDriver("postgerss", orm.DRPostgres)
	orm.RegisterDataBase("default", "postgres", "host="+mypsqlIP+" port=5432 user=postgres password=postgres dbname=postgres sslmode=disable")
	orm.SetMaxIdleConns("default", 10)
	orm.SetMaxOpenConns("default", 50)
	//auto create table
	orm.RunSyncdb("default", false, true)

	ormJob = orm.NewOrm()
	ormJob.Using("default")
}

func getDBIp() {
	for {
		time.Sleep(time.Second)

		ns, err := net.LookupHost("mypsql-postgresql")
		if err != nil {
			fmt.Fprintf(os.Stderr, "Err: %s", err.Error())
			//for local test
			mypsqlIP = testPsqlIP
			return
			//end for local test
		} else {

			for _, n := range ns {
				fmt.Fprintf(os.Stdout, "--%s\n", n)
				mypsqlIP = n
			}
			break
		}
	}
}

func GetJobList() []Job {
	var maps []orm.Params
	var jobs []Job
	num, err := ormJob.Raw("SELECT * FROM job").Values(&maps)
	if num > 0 {
		fmt.Println(maps[0]["id"])
	}
	fmt.Println(err)
	for _, v := range maps {
		job := Job{
			Name: v["name"].(string),
		}
		job.ID, err = strconv.ParseInt(v["i_d"].(string), 10, 64)
		jobs = append(jobs, job)
	}
	return jobs
}

func AddJob(job Job) (Job, error) {
	curDate := time.Now().Format("2020-09-04 18:00:00")
	ormJob.Begin()
	//...
	job.Name = "test-" + curDate
	id, err := ormJob.Insert(&job)
	if err == nil {
		ormJob.Commit()
		fmt.Println("commit job id: ", id)
	} else {
		ormJob.Rollback()
		fmt.Println("rollback job id: ", id)
	}
	fmt.Println("job id: ", id)
	return job, nil
}
