# include <iostream>
# include "rectBlocks.h"
# include "sqrBaseRectBlocks.h"
# include "cuboidBlocks.h"
# include "cylindericalBlocks.h"
# include "sphericalBlocks.h"
# include "vector"
# include "string"
# include "fstream"
# include "algorithm"

#pragma once
using namespace std;

// Constructing rectangular blocks from the data file
void constructRectBlocks(ifstream& inputDataFile, vector<rectBlocks>& rectVector, string& numLines){
    int width, height, length;
    while (getline(inputDataFile, numLines)){
        inputDataFile >> width >> height >> length;
        rectBlocks block(width, height, length);
        rectVector.push_back(block);
    }
    inputDataFile.close();
}

// Deriving square objects from rectangular objects
void constructSquareBlocks(vector<rectBlocks>& rectangleBlocks, vector<sqrBaseRectBlocks>& squareBlocks){
    for (int i = 0; i < rectangleBlocks.size(); i++){
        rectBlocks rectangle = rectangleBlocks[i];
        if(rectangle.getWidth() == rectangle.getHeight()){
            sqrBaseRectBlocks sqrBlock(rectangle.getWidth(), rectangle.getHeight(), rectangle.getLength());
            squareBlocks.push_back(sqrBlock);
        }
    }
}

// Deriving cuboid objects from square base objects
void constructCuboidBlocks(vector<sqrBaseRectBlocks> &squares, vector<cuboidBlocks>& cuboids){
    for (int i = 0; i < squares.size(); i++){
        sqrBaseRectBlocks squareBlock = squares[i];
        if(squareBlock.getWidth() == squareBlock.getHeight()){
            if(squareBlock.getWidth() == squareBlock.getLength()){
                cuboidBlocks cuboid(squareBlock.getWidth(), squareBlock.getHeight(), squareBlock.getLength());
                cuboids.push_back(cuboid);
            }
        }
    }
}

// Deriving cylinders from square base objects
void constructCylinders(vector<sqrBaseRectBlocks>& squares, vector <cylindericalBlocks>& cylinders){
    for (int i = 0; i < squares.size(); i++){
        sqrBaseRectBlocks sqr = squares[i];
        cylindericalBlocks cylinder(sqr.getWidth(), sqr.getLength());
        cylinders.push_back(cylinder);
    }
}

// Deriving spheres from cuboid objects
void constructSpheres(vector<cuboidBlocks>& cuboids, vector<sphericalBlocks>& spheres){
    for(int i = 0; i < cuboids.size(); i++){
        cuboidBlocks cuboid = cuboids[i];
        sphericalBlocks sphere(cuboid.getLength());
        spheres.push_back(sphere);
    }
}

//Printing out cylinderical objects in ascending order
void printCylinders(vector<cylindericalBlocks>& A){
    sort(A.begin(), A.end());
    cout << "Printing Cylinderical Objects in Ascending Order"<< "\n\n";
    for(int i = 0; i < A.size(); i++){
       cout<< "Diameter: "<< A[i].getDiameter() <<" Length:"<< A[i].getHeight()
           << " Surface Area:"<< A[i].getSurfaceArea() << "\n\n";   
    }

}

// Printing out spherical objects in ascending order
void printSpheres(vector<sphericalBlocks>& B){
    sort(B.begin(), B.end());
    cout << "Printing Spherical Objects in Ascending Order"<< "\n\n";
    for(int i = 0; i < B.size(); i++){
       cout<< "Diameter: "<< B[i].getDiameter() <<" Volume:"<< B[i].getVolume()
           << " Surface Area:"<< B[i].getSurfaceArea() << "\n\n";
    }
}