#include<iostream>
#include "sqrBaseRectBlocks.h"
#pragma once

using namespace std;

class cylindericalBlocks : public sqrBaseRectBlocks{
    private:
        // Instance variables
        int diameter, height;

    public:
        // Constructors
        cylindericalBlocks();
        cylindericalBlocks(int, int);

        // Getter methods
        int getDiameter() { return diameter; }
        int getHeight() { return height; }

        // Setter methods
        void setDiameter(int diameter) { diameter = diameter; }
        void setHeight(int height){ height = height; }

        // Declaration for surface area
        double getSurfaceArea();

        // Overloading the < operator for easy sorting
        bool operator<(cylindericalBlocks object);
};