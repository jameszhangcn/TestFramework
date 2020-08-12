FROM mone-rhel7.6:v2

LABEL maintainer="junjie.jiang@mavenir.com"

# SRM Grpc service
EXPOSE 9008

ADD srmsvc /go/bin/srmsvc
WORKDIR /go
ENTRYPOINT ["/go/bin/srmsvc"]