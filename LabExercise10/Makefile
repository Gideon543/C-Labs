testStabLineProg: stabbingLines.h readPoints.o readLines.o printLineByCoords.o getStabbedLines.o testStabLineProg.o
	g++ -std=c++11 -o testStabLineProg readLines.o readPoints.o printLineByCoords.o getStabbedLines.o testStabLineProg.o -I.

readPoints.o: stabbingLines.h readPoints.cpp
	g++ -std=c++11 -c readPoints.cpp -I.

readLines.o: stabbingLines.h readLines.cpp	
	g++ -std=c++11 -c readLines.cpp -I.

printLineByCoords.o: stabbingLines.h printLineByCoords.cpp 
	g++ -std=c++11 -c printLineByCoords.cpp -I.

getStabbedLines.o: stabbingLines.h getStabbedLines.cpp
	g++ -std=c++11 -c getStabbedLines.cpp -I.

testStabLineProg.o: stabbingLines.h testStabLineProg.cpp
	g++ -std=c++11 -c testStabLineProg.cpp -I.

clean:
	\rm *.o *˜ testStabLineProg