#include "stabbingLines.h"

void readLines(ifstream& inPutLineFile, Line linesArray[], const int MaxLnsSize, string& numLines){
    int Lid, pointId1, pointId2;
    linesArray[MaxLnsSize];
    while (getline(inPutLineFile, numLines))
    {
        inPutLineFile >> Lid >> pointId1 >> pointId2;
        Line line;
        line.Lid = Lid;
        line.p1 = pointId1;
        line.p2 = pointId2;
        linesArray[Lid] = line;
    }
    inPutLineFile.close();
}