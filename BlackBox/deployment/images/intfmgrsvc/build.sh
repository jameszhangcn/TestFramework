#!/bin/sh
echo -e "Start to build the docker image"
tag="intfmgrsvc:0.0.1"
docker stop intfmgrsvc
docker rm intfmgrsvc
docker rmi ${tag}

echo -e "Docker build..."
docker build --no-cache --rm=true -t ${tag} .
echo -e "rebuild finished"