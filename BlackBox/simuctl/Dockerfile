FROM liumiaocn/golang:1.13.5-alpine3.11 as builder
ENV GO111MODULE on
ENV GOPROXY https://goproxy.cn
WORKDIR /build
RUN adduser -u 10001 -D app-runner
ADD go.mod .
ADD go.sum .
RUN go mod download

COPY . .
RUN GOOS=linux CGO_ENABLED=0 go build -ldflags="-s -w" -installsuffix cgo -o simuctl .


FROM alpine:3.10 AS final
WORKDIR /home/app-runner
COPY --from=builder /build/simuctl /home/app-runner

#CMD ["/home/app-runner/simuctl"]
CMD ["ls"]

