package main
import (
    "bytes"
    "log"
    "os/exec"
    "strconv"
    "strings"
    "time"
)
type Process struct {
    pid int
    name string
    cpu float64
}
const max_count_proc = 10

func getCpuUsage() {
    cmd := exec.Command("ps", "aux", "--sort=-%cpu")
    var out bytes.Buffer
    cmd.Stdout = &out
    err := cmd.Run()
    if err != nil {
        log.Fatal(err)
    }
    count := 0
    processes := make([]*Process, 0)
    for {
        line, err := out.ReadString('\n')
        if err!=nil {
            break;
        }
        tokens := strings.Split(line, " ")
        ft := make([]string, 0)
        for _, t := range(tokens) {
            if t!="" && t!="\t" {
                ft = append(ft, t)
            }
        }
        log.Println(len(ft), ft)
        pid, err := strconv.Atoi(ft[1])
        if err!=nil {
            continue
        }
        name := ft[10]
        if err!=nil {
            continue
        }
        cpu, err := strconv.ParseFloat(ft[2], 64)
        if err!=nil {
            log.Fatal(err)
        }
        processes = append(processes, &Process{pid, name, cpu})
	count++
	if count >= max_count_proc {
		break
	}
    }
    total_cpu := 0.0
    for _, p := range(processes) {
        log.Println("Process ", p.pid, p.name, " takes ", p.cpu, " % of the CPU")
        total_cpu += p.cpu
    }
    log.Println("total cpu: ", total_cpu)
}

func main(){
    for {
    time.Sleep(time.Second)
    getCpuUsage()
    }
}
