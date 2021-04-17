#include "stabbingLines.h"

void readPoints(ifstream& inPutPointFile, Point pointsArray[], int MaxPntsSize, string& numPoints){
    int pointId, x_cordinate, y_cordinate;
    pointsArray[MaxPntsSize];
    while (getline(inPutPointFile, numPoints))
    {
        inPutPointFile >> pointId >> x_cordinate>> y_cordinate;
        Point point;
        point.Pid = pointId;
        point.x = x_cordinate;
        point.y = y_cordinate;
        pointsArray[pointId] = point;

    }
    inPutPointFile.close();
}