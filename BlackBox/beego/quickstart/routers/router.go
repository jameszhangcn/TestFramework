package routers

import (
	"quickstart/controllers"

	"github.com/astaxie/beego"
)

func init() {
	//add routers
	beego.Router("/", &controllers.MainController{}, "*:Head")
	beego.Router("/query", &controllers.MainController{}, "*:JobQuery")
	beego.Router("/add", &controllers.MainController{}, "*:JobAdd")
	beego.Router("/show", &controllers.MainController{}, "*:ShowJobInfo")

}
