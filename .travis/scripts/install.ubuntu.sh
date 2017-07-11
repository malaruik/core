#!/bin/bash 

# to trusty 
  
sudo sed -i 's/precise/trusty/g' /etc/apt/sources.list;
   
sudo apt-get update -qq 
#sudo apt-get install libsdl1.2-dev libopenal-dev cmake

sudo apt-get install -qqy binutils-mingw-w64 gcc-mingw-w64-i686 gcc-mingw-w64-x86-64 gcc-mingw-w64 mingw-w64 nsis
