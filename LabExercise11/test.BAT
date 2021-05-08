#!/bin/bash

echo "Compiling rectBlocks.cpp"
g++ -std=c++11 -c rectBlocks.cpp

echo "Compiling sqrBaseRectBlocks.cpp"
g++ -std=c++11 -c sqrBaseRectBlocks.cpp

echo "Compiling cuboidBlocks.cpp"
g++ -std=c++11 -c cuboidBlocks.cpp

echo "Compiling cylindericalBlocks.cpp"
g++ -std=c++11 -c cylindericalBlocks.cpp

echo "Compiling sphericalBlocks.cpp"
g++ -std=c++11 -c sphericalBlocks.cpp

echo "Compiling main.cpp"
g++ -std=c++11 -c main.cpp

echo "Linking .o files"
g++ -std=c++11 -o test rectBlocks.o sqrBaseRectBlocks.o main.o cuboidBlocks.o sphericalBlocks.o cylindericalBlocks.o rectBlocks.h sphericalBlocks.h sqrBaseRectBlocks.h cuboidBlocks.h cylindericalBlocks.h

echo "Executing the program"
./test

echo "Removing .o files after execution"
rm *.o
rm test