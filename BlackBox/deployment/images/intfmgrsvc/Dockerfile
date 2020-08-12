FROM mone-rhel7.6:v2

LABEL maintainer="junjie.jiang@mavenir.com"

# Interface Manager Grpc service
EXPOSE 9003

ADD intfmgrsvc /go/bin/intfmgrsvc
ADD libasn1.so /usr/lib64/libasn1.so
WORKDIR /go
ENTRYPOINT ["/go/bin/intfmgrsvc"]