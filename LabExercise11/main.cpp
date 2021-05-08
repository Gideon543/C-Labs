# include <iostream>
# include "constructionFunctions.h"
using namespace std;
int main() {
    
    string numLines;
    vector<rectBlocks> rectangles;
    ifstream dataFile("dataBlocks.dat");
    constructRectBlocks(dataFile, rectangles, numLines);


    vector<sqrBaseRectBlocks> squares;
    constructSquareBlocks(rectangles, squares);

    vector<cuboidBlocks> cuboids;
    constructCuboidBlocks(squares, cuboids);

    vector<cylindericalBlocks> cylinders;
    constructCylinders(squares, cylinders);

    vector<sphericalBlocks> spheres;
    constructSpheres(cuboids, spheres);
    
    printCylinders(cylinders);
    cout<<""<<"\n";
    printSpheres(spheres);


}