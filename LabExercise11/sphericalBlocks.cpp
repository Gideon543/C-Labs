#include "sphericalBlocks.h"
#include <cmath>

// Initialize PI for calculation of volume and surface area
const double PI=M_PI;

// Definition of default constructor
sphericalBlocks::sphericalBlocks(){}

// Definition of overloaded constructor
sphericalBlocks::sphericalBlocks(int diameter): diameter(diameter), radius(diameter/2){} 

// Definition for volume of the sphere
double sphericalBlocks::getVolume(){
        return (4/3)*PI*pow(radius,3);
}

// Definiton for the surface area of the sphere
double sphericalBlocks::getSurfaceArea(){
       return 4*PI*pow(radius,2);
}

// Overloading < operator
bool sphericalBlocks::operator <(sphericalBlocks object){
    return diameter <object.getDiameter();
}
