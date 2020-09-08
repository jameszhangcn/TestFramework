package controllers

import (
	"fmt"
	"quickstart/controllers/pager"
	"quickstart/models"

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
	if len(jobs) != 0 {
		c.Data["JobID"] = jobs[0].ID
		c.Data["JobName"] = jobs[0].Name
	}
	c.TplName = "query.html"
}

func (c *MainController) JobAdd() {
	var job models.Job

	//models.AddJob("test-" + curDate)
	c.ParseForm(&job)
	jobAdd, _ := models.AddJob(job)
	c.Data["JobID"] = jobAdd.ID
	c.Data["JobName"] = jobAdd.Name
	c.TplName = "query.html"
}

func (c *MainController) ShowJobInfo() {
	pno, _ := c.GetInt("page") //获取当前请求页
	var Items []models.Job
	conditions := " order by id desc"
	var po pager.PageOptions
	po.ParamName = "page"
	po.TableName = "users"        //指定分页的表名
	po.EnableFirstLastLink = true //是否显示首页尾页 默认false
	po.EnablePreNexLink = true    //是否显示上一页下一页 默认为false
	po.Conditions = conditions    // 传递分页条件 默认全表
	po.Currentpage = int(pno)     //传递当前页数,默认为1
	po.PageSize = 20              //页面大小  默认为20

	//返回分页信息,
	//第一个:为返回的当前页面数据集合,ResultSet类型
	//第二个:生成的分页链接
	//第三个:返回总记录数
	//第四个:返回总页数
	totalItem, totalPage, rs, pagerhtml2 := pager.GetPagerLinks(&po, c.Ctx)
	rs.QueryRows(&Items) //把当前页面的数据序列化进一个切片内
	c.Data["pagerhtml"] = pagerhtml2
	c.Data["totalItem"] = totalItem
	c.Data["PageSize"] = po.PageSize
	c.Data["totalPage"] = totalPage
	c.Data["Items"] = Items

	c.Layout = "layout.html"
	c.TplName = "index.html"
}
