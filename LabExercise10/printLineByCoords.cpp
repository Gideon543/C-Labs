#include "stabbingLines.h"

void printLineByCoords(LineId lid, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){
    linesArray[MaxLnsSize];
    pointsArray[MaxPntsSize];
    for (int i = lid; i < MaxLnsSize; i++)
    {
        Line line = linesArray[i];
        Point firstPoint = pointsArray[line.p1];
        Point secondPoint = pointsArray[line.p2];
        cout << line.Lid << ", (" << firstPoint.x << ", " << firstPoint.y <<"), " << "(" << secondPoint.x  << ", "<< secondPoint.y << ")" << "\n";
    }
}