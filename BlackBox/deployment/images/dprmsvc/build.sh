#!/bin/sh
echo -e "Start to build the docker image"
tag="dprmsvc:0.0.1"
docker stop dprmsvc
docker rm dprmsvc
docker rmi ${tag}

echo -e "Docker build..."
docker build --no-cache --rm=true -t ${tag} .
echo -e "rebuild finished"