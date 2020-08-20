package main

import (
	"fmt"
	"net"
	"os"
	"time"

	"github.com/Shopify/sarama"
	"github.com/segmentio/kafka-go"
)

var brokerIP string
var brokerPort = ":9092"

const MaxRetryCount = 1000

func WaitKafkaReady() {
	for {
		time.Sleep(time.Second)
		ns, err := net.LookupHost("kafka.kafka")
		if err != nil {
			fmt.Fprintf(os.Stderr, "Err: %s \n", err.Error())
			//for host test
			//myNatsIP = "127.0.0.1"
			//break
			//end for host test

		} else {

			for _, n := range ns {
				fmt.Fprintf(os.Stdout, "--%s\n", n)
				brokerIP = n
			}
			break
		}
	}

}

func consumer() {
	consumer, err := sarama.NewConsumer([]string{brokerIP + brokerPort}, nil)
	if err != nil {
		panic(err)
	}
	defer consumer.Close()
	pc, err := consumer.ConsumePartition("test", 0, sarama.OffsetOldest)
	defer pc.Close()
	for {
		select {
		case msg := <-pc.Messages():
			fmt.Printf("consumer msg offset: %d, partition: %d, timestamp: %s, value: %s \n",
				msg.Offset, msg.Partition, msg.Timestamp.String(), string(msg.Value))
		case err := <-pc.Errors():
			fmt.Printf("err: %s\n", err.Error())
		}
	}

}

func tryKafkaConn() (err error) {
	dialer := &kafka.Dialer{
		Timeout:  10 * time.Second,
		ClientID: "test",
	}
	_, err = dialer.Dial("tcp", brokerIP+brokerPort)
	if err != nil {
		return
	}
	return
}

func ConnKafka() (err error) {
	var i int
	for i = 0; i < MaxRetryCount; i++ {
		err = tryKafkaConn()
		if err != nil {
			fmt.Println("Error while dialing kafka. Retrying...")
			continue
		} else {
			fmt.Println("Kafka dial connection successful")
			break
		}
	}
	return nil
}

func main() {
	config := sarama.NewConfig()
	fmt.Println("Test kafka: ", config)
	WaitKafkaReady()
	ConnKafka()

	config.Producer.RequiredAcks = sarama.WaitForAll
	config.Producer.Partitioner = sarama.NewRandomPartitioner
	config.Producer.Return.Successes = true

	producer, err := sarama.NewSyncProducer([]string{brokerIP + brokerPort}, config)
	if err != nil {
		panic(err)
	}
	defer producer.Close()

	msg := &sarama.ProducerMessage{
		Topic:     "test",
		Partition: int32(10),
		Key:       sarama.StringEncoder("key"),
	}

	var value string
	var msgType string

	msgType = "test"
	value = "jameszhang"

	msg.Topic = msgType
	msg.Value = sarama.ByteEncoder(value)

	go consumer()
	for {

		time.Sleep(time.Second)
		partition, offset, err := producer.SendMessage(msg)
		if err != nil {
			fmt.Println("Send message Fail")
		}
		fmt.Printf("Partition = %d, offset = %d\n", partition, offset)

	}
}
