#!/bin/sh
echo -e "Start to build the docker image"
tag="iwfsvc:0.0.1"
docker stop iwfsvc
docker rm iwfsvc
docker rmi ${tag}

echo -e "Docker build..."
docker build --no-cache --rm=true -t ${tag} .
echo -e "rebuild finished"