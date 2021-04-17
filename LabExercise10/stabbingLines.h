#include <iostream>
#include <iomanip> 
#include <cmath> 
#include <cstdlib> 
#include <fstream>
#include <string> 
#define MAXARRAYSIZE 500
using namespace std ;

typedef int PointId ; 
typedef int LineId ; 
struct Point { //define a Point struct 
    PointId Pid; // Point Id 
    int x ; // x-coordinate of a point 
    int y ; // y-coordinate of a point
};

struct Line { // define a Line by its 2 End points 
    LineId Lid ; // Line Id 
    PointId p1 ; // first Point 
    PointId p2 ; // second Point 
};


// Declaring the prototype functions 

void readPoints(ifstream &inPutPointFile, Point pointsArray[], const int MaxPntsSize, string& numPoints);

void readLines(ifstream& inPutLineFile, Line linesArray[], const int MaxLnsSize, string& numLines); 

void printLineByCoords(LineId lid, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize); 

void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPtsSize, Line stabbedLines[], const int MaxStbSize, int& NumOfStbLines);


 

