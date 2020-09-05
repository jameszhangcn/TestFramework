package main

import (
	"sync"
	"time"

	"github.com/wonderivan/logger"
)

var book = []string{"aaaaa", "bbbbb", "ccccc", "ddddd"}

var blackboard string

var page int

const TOTAL_PAGES int = 4

var rwmutext = sync.RWMutex{}

type Student struct {
	Name  string
	Rtext string
}

type Teacher struct {
	Name  string
	Wtext string
}

func (s *Student) read() {
	logger.Info(s.Name + "request read ...")
	rwmutext.RLock()
	defer rwmutext.RUnlock()
	logger.Info(s.Name + " start read ")
	s.Rtext = blackboard
	time.Sleep(time.Second)
	logger.Info(s.Name + " end read " + s.Rtext)
}

func (t *Teacher) write(index int) {
	logger.Info(t.Name + " request write ...")
	rwmutext.Lock()
	if index == page {
		logger.Info(t.Name + " start write ...")
		t.Wtext = book[page]
		time.Sleep(time.Second * 3) //take 3 second to write
		blackboard = t.Wtext
		page++
		logger.Info(t.Name+" finish. blackboard: ", blackboard)
		rwmutext.Unlock()
		time.Sleep(time.Second * 3) //wait 3 second for student reading
	} else {
		logger.Info(t.Name + " end ...")
		rwmutext.Unlock()
	}
}

func RwTest01(wg *sync.WaitGroup) {
	var wgsub sync.WaitGroup
	sa := &Student{Name: "S-a"}
	sb := &Student{Name: "S-b"}
	sc := &Student{Name: "S-c"}

	ta := &Teacher{Name: "T-a"}
	tb := &Teacher{Name: "T-b"}
	wgsub.Add(1)
	go startWrite(ta, &wgsub)
	wgsub.Add(1)
	go startWrite(tb, &wgsub)

	time.Sleep(time.Second * 1) //teacher start write first
	wgsub.Add(1)
	go startRead(sa, &wgsub)
	wgsub.Add(1)
	go startRead(sb, &wgsub)
	wgsub.Add(1)
	go startRead(sc, &wgsub)
	wgsub.Wait()
	wg.Done()
}

func startRead(s *Student, wg *sync.WaitGroup) {
	for i := 0; i < 1000; i++ {
		logger.Info("Student ", s.Name, " read ", i+1, blackboard)
		s.read()
		if TOTAL_PAGES == page {
			break
		}
	}
	logger.Info("Student ", s.Name, "End reading")
	wg.Done()
}

func startWrite(t *Teacher, wg *sync.WaitGroup) {
	for i := 0; i < TOTAL_PAGES; i++ {
		t.write(i)
	}
	wg.Done()
}

func main() {
	var wg sync.WaitGroup
	wg.Add(1)
	RwTest01(&wg)
	wg.Wait()
}
