#!/bin/bash
brew install socat
socat TCP-LISTEN:6000,reuseaddr,fork UNIX-CLIENT:\"$DISPLAY\"
open -a Xquartz
defaults write org.xquartz.X11 enable_iglx -bool true
defaults read org.xquartz.X11 enable_iglx
sudo port install xhost
DISPLAY=:0
sudo xhost +

docker build --tag macosopengl:1.0 .
sudo docker run --rm -it -v ./src:/src -e DISPLAY=X.X.X.X:0  --net=host -p 6006:6006 -p 8888:8888 --privileged --name="macosOpenGL" macosopengl:1.0
