FROM mone-rhel7.6:v2

LABEL maintainer="junjie.jiang@mavenir.com"

# GW Grpc service
EXPOSE 9000

ADD gwsvc /go/bin/gwsvc
WORKDIR /go
ENTRYPOINT ["/go/bin/gwsvc"]