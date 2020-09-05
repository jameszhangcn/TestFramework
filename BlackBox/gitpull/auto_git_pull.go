package main

import (
	"bufio"
	"fmt"
	"io"
	"io/ioutil"
	"os"
	"os/exec"
	"strings"
)

const (
	//config file
	CONFFILE string = "config.txt"
)

func main() {
	for {
		//read the file info
		bytes, err := ioutil.ReadFile(CONFFILE)
		if err != nil {
			fmt.Println(err.Error())
			return
		}

		//split
		text := string(bytes)
		cmdarr := strings.Split(text, "\r\n")

		isBegin := 1
		for _, val := range cmdarr {
			tmpval := strings.TrimSpace(val)
			//new cmd, change the dir
			if tmpval != "" && isBegin == 1 {
				os.Chdir(tmpval)
			} else if tmpval != "" {
				//split
				cmdarr := strings.Split(tmpval, "")
				//command
				command := cmdarr[0]
				//param
				params := cmdarr[1:]
				//exec the cmd
				execCommand(command, params)
			}

			//is space line, a new command started
			if tmpval == "" {
				isBegin = 1
				continue
			} else {
				isBegin = 0
			}
		}
	}
}

func execCommand(commandName string, params []string) bool {
	cmd := exec.Command(commandName, params...)
	fmt.Println(cmd.Args)
	stdout, err := cmd.StdoutPipe()
	if err != nil {
		fmt.Println(err)
		return false
	}
	cmd.Start()

	reader := bufio.NewReader(stdout)
	//read the output
	for {
		line, err2 := reader.ReadString('\n')
		if err2 != nil || io.EOF == err2 {
			break
		}
		fmt.Println(line)
	}
	cmd.Wait()
	return true
}
