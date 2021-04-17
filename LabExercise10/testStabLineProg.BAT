#!/bin/bash

echo "Compiling readPoints.cpp"
g++ -std=c++11 -c readPoints.cpp

echo "Compiling readLines.cpp"
g++ -std=c++11 -c readLines.cpp

echo "Compiling printLineByCoords.cpp"
g++ -std=c++11 -c printLineByCoords.cpp

echo "Compiling getStabbedLines.cpp"
g++ -std=c++11 -c getStabbedLines.cpp

echo "Linking .o files"
g++ -std=c++11 -o testStabLineProg readLines.o readPoints.o printLineByCoords.o getStabbedLines.o testStabLineProg.o -I.

echo "Executing the program"
./testStabLineProg