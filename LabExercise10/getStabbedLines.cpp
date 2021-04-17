#include "stabbingLines.h"

void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPtsSize, Line stabbedLines[], const int MaxStbSize, int& NumOfStbLines){
    linesArray[MaxLnsSize];
    pointsArray[MaxPtsSize];
    stabbedLines[MaxStbSize];

    for (int i = 0; i < MaxLnsSize; i++){
        Line line = linesArray[i];
        int x1 = pointsArray[line.p1].x;
        int x2 = pointsArray[line.p2].x;

        if(x2 >= xcoord){
            if (x1 < xcoord){
                stabbedLines[NumOfStbLines++] = line;
            }
        }
    }
}