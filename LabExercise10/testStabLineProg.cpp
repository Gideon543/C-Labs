#include "stabbingLines.h"

int main (){
    ifstream inputfile("points.txt");
    string numPoint;
    Point pointArray[MAXARRAYSIZE];
    readPoints(inputfile, pointArray, 8, numPoint);

    ifstream inputLineFile("lines.txt");
    string numLines;
    Line linesArray[MAXARRAYSIZE];
    readLines(inputLineFile, linesArray, 5, numLines);

    cout << "Lines and The Coordinates of Their Points." <<"\n";
    printLineByCoords(0, linesArray, 5, pointArray, 8);
    cout << "\n";

    Line stabbedLines[MAXARRAYSIZE];
    int numlines = 0;
    getStabbedLines(2, linesArray, 5,  pointArray, 8, stabbedLines, 5, numlines);
    cout << "Stabbed Lines and The Coordinates of Their Points." <<"\n";
    printLineByCoords(0, stabbedLines, numlines, pointArray, 8);

    return 0;
}
