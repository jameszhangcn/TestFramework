FROM mone-rhel7.6:v2

LABEL maintainer="junjie.jiang@mavenir.com"

# IWF Grpc service
EXPOSE 9006

ADD iwfsvc /go/bin/iwfsvc
WORKDIR /go
ENTRYPOINT ["/go/bin/iwfsvc"]