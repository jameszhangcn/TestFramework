FROM mone-rhel7.6:v2

LABEL maintainer="junjie.jiang@mavenir.com"

# DPRM Grpc service
EXPOSE 9004

ADD dprmsvc /go/bin/dprmsvc
WORKDIR /go
ENTRYPOINT ["/go/bin/dprmsvc"]