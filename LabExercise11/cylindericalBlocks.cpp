#include "cylindericalBlocks.h"
#include <cmath>

//Initializing PI
const double PI=M_PI;

// Define default constructor
cylindericalBlocks::cylindericalBlocks(){};

// Define the overloaded constructor
cylindericalBlocks::cylindericalBlocks(int diameter, int height): diameter(diameter), height(height){}
    
// Define the surface area of the cylinder
double cylindericalBlocks::getSurfaceArea(){
    double radius = diameter/2;
    return (2*PI*radius*height) + (2*PI*pow(radius,2)/radius);
}

// Overloading < operator
bool cylindericalBlocks::operator <(cylindericalBlocks object){
    return diameter <object.getDiameter();
}
