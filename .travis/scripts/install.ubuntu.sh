#!/bin/bash 

# to trusty 
  
sudo sed -i 's/precise/trusty/g' /etc/apt/sources.list;
   
sudo apt-get update -qq 
sudo apt-get install libsdl1.2-dev libopenal-dev cmake

sudo apt-get install -qqy g++-mingw-w64-x86-64 nsis;
