package main

import (
	"context"
	"fmt"
	"net"
	"os"
	"strings"
	"time"

	"github.com/coreos/etcd/clientv3"
)

var myEtcdIP string
var myEtcdPort = ":2389"
var etcdClient *clientv3.Client

func init() {
}

func createEtcdClient() error {
	var err error
	etcdClient, err = clientv3.New(clientv3.Config{
		Endpoints:   []string{myEtcdIP + myEtcdPort},
		DialTimeout: 60 * time.Second,
	})
	if err != nil {
		fmt.Println("create ETCD client error")
	}
	return err
}

func getEtcdIp() {
	for {
		time.Sleep(time.Second)

		ns, err := net.LookupHost("myetcd")
		if err != nil {
			fmt.Fprintf(os.Stderr, "Err: %s", err.Error())

		} else {

			for _, n := range ns {
				fmt.Fprintf(os.Stdout, "--%s\n", n)
				myEtcdIP = n
			}
			break
		}
	}
}

func watchEtcdKey(ctx context.Context, etcd *clientv3.Client, etcdWatchKey string, cb func(event *clientv3.Event)) {

	defer etcd.Close()
	watchChan := etcd.Watch(ctx, etcdWatchKey, clientv3.WithPrefix())
	if watchChan == nil {
		fmt.Println("watch channel is nill")
		return
	}

	for watchResp := range watchChan {
		select {
		case <-ctx.Done():
			{
				fmt.Println("Watch config Done")
				return
			}
		default:
			{
				go func(resp clientv3.WatchResponse) {
					for _, event := range resp.Events {
						cb(event)
					}
				}(watchResp)
			}
		}
	}
}

func handleEtcdUpdate(event *clientv3.Event) {
	fmt.Println("Event received: ", event.Type, "executed on", string(event.Kv.Key[:]), "with value", string(event.Kv.Value[:]))
	eventType := fmt.Sprintf("%s", event.Type)
	keys := strings.Split(string(event.Kv.Key), "/")
	fmt.Println(eventType, keys)
}

func sendEtcd(ctx context.Context, key string, data []byte) {

	for {
		select {
		case <-ctx.Done():
			fmt.Println("Main ctx done")
			return
		default:
			{
				kv := clientv3.NewKV(etcdClient)
				ctx, cancleFunc := context.WithTimeout(context.TODO(), 5*time.Second)
				putResp, err := kv.Put(ctx, key, string(data), clientv3.WithPrevKV())
				if err != nil {
					fmt.Println(err)
				} else {
					fmt.Println("Revision:", putResp.Header.Revision)
					if putResp.PrevKv != nil {
						fmt.Println("key:", string(putResp.PrevKv.Key))
						fmt.Println("Value:", string(putResp.PrevKv.Value))
						fmt.Println("Version:", string(putResp.PrevKv.Version))
					}
				}
				cancleFunc()
				fmt.Printf("PutResponse: %v, err: %v", putResp, err)
			}
		}
	}
}

func getEtcd(ctx context.Context, key string, data []byte) {

	for {
		select {
		case <-ctx.Done():
			fmt.Println("Main ctx done")
			return
		default:
			{
				kv := clientv3.NewKV(etcdClient)
				ctx, cancleFunc := context.WithTimeout(context.TODO(), 5*time.Second)
				getResp, err := kv.Get(ctx, key, clientv3.WithPrefix())
				if err != nil {
					panic(err)
				}
				cancleFunc()
				fmt.Println("%v", getResp.Kvs)
			}
		}
	}
}
