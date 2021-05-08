#include<iostream>
#include "cuboidBlocks.h"
#pragma once

using namespace std;

class sphericalBlocks : public cuboidBlocks{
    private:
        // Instance variables
        int diameter, radius;

    public:
        // Constructors
        sphericalBlocks();
        sphericalBlocks(int);

        // Getter
        int getDiameter() { return diameter; }

        // Setter
        void setDiameter(int diameter) { diameter = diameter; }

        // Declaration of the volume of a spherical block
        double getVolume(); 

        // Declaration of the surface area of a spherical block
        double getSurfaceArea(); 

        // Overloading the < operator for easy sorting
        bool operator<(sphericalBlocks object);
};