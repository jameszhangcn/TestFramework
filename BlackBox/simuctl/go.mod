module simuctl

go 1.14

require (
	github.com/coreos/bbolt v1.3.4 // indirect
	github.com/coreos/etcd v3.3.22+incompatible
	github.com/coreos/go-semver v0.3.0 // indirect
	github.com/dustin/go-humanize v1.0.0 // indirect
	github.com/go-gomail/gomail v0.0.0-20160411212932-81ebce5c23df
	github.com/gogo/protobuf v1.3.1 // indirect
	github.com/golang/groupcache v0.0.0-20200121045136-8c9f03a8e57e // indirect
	github.com/google/uuid v1.1.1 // indirect
	github.com/gorilla/websocket v1.4.2 // indirect
	github.com/grpc-ecosystem/go-grpc-middleware v1.2.0 // indirect
	github.com/grpc-ecosystem/grpc-gateway v1.14.6 // indirect
	github.com/jonboulle/clockwork v0.2.0 // indirect
	github.com/mattbaird/jsonpatch v0.0.0-20171005235357-81af80346b1a
	github.com/nats-io/nats.go v1.10.0
	github.com/prometheus/client_golang v1.7.1 // indirect
	github.com/prometheus/common v0.10.0
	github.com/spf13/cobra v1.0.0 // indirect
	github.com/spf13/pflag v1.0.5 // indirect
	github.com/tmc/grpc-websocket-proxy v0.0.0-20200427203606-3cfed13b9966 // indirect
	go.etcd.io/bbolt v1.3.4 // indirect
	go.uber.org/zap v1.15.0 // indirect
	golang.org/x/time v0.0.0-20200630173020-3af7569d3a1e // indirect
	google.golang.org/grpc v1.31.0 // indirect
	sigs.k8s.io/yaml v1.2.0 // indirect
)

replace github.com/coreos/go-systemd => github.com/coreos/go-systemd/v22 v22.0.0

replace github.com/coreos/bbolt v1.3.4 => go.etcd.io/bbolt v1.3.4

replace go.etcd.io/bbolt v1.3.4 => github.com/coreos/bbolt v1.3.4

replace google.golang.org/grpc => google.golang.org/grpc v1.26.0
