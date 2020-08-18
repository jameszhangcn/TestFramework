FROM ubuntu:latest as builder
ENV GO111MODULE on
ENV GOPROXY https://goproxy.cn
WORKDIR /build
ADD go.mod .
ADD go.sum .

COPY simucucp .


FROM simucucp:v2 AS final
WORKDIR /root
COPY ./codec/libasn1.so /usr/lib/
COPY --from=builder /build/simucucp /root/

#CMD ["/home/app-runner/simuctl"]
CMD ["ls"]

