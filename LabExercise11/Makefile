main: rectBlocks.h constructionFunctions.h rectBlocks.o cuboidBlocks.h cuboidBlocks.o sphericalBlocks.h sphericalBlocks.o cylindericalBlocks.h cylindericalBlocks.o sqrBaseRectBlocks.h sqrBaseRectBlocks.o main.o
	g++ -std=c++11 -o main rectBlocks.o cuboidBlocks.o sphericalBlocks.o cylindericalBlocks.o sqrBaseRectBlocks.o main.o -I.

rectBlocks.o: rectBlocks.h rectBlocks.cpp
	g++ -std=c++11 -c rectBlocks.cpp -I.

cuboidBlocks.o: cuboidBlocks.h cuboidBlocks.cpp	
	g++ -std=c++11 -c cuboidBlocks.cpp -I.

sphericalBlocks.o: sphericalBlocks.h sphericalBlocks.cpp 
	g++ -std=c++11 -c sphericalBlocks.cpp -I.

sqrBaseRectBlocks.o: sqrBaseRectBlocks.h sqrBaseRectBlocks.cpp
	g++ -std=c++11 -c sqrBaseRectBlocks.cpp -I.

cylindericalBlocks.o: cylindericalBlocks.h cylindericalBlocks.cpp
	g++ -std=c++11 -c cylindericalBlocks.cpp -I.

main.o: cylindericalBlocks.h rectBlocks.h cylindericalBlocks.h sqrBaseRectBlocks.h sphericalBlocks.h main.cpp
	g++ -std=c++11 -c main.cpp -I.

clean:
	rm *.o main