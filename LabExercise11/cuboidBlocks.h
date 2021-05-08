#include<iostream>
#include "sqrBaseRectBlocks.h"
#pragma once

using namespace std;

class cuboidBlocks : public sqrBaseRectBlocks{
    private:
        int width, height, length;
    public:
        // Constructors
        cuboidBlocks();
        cuboidBlocks(int, int, int);

        //Declaration of Getters
        int getWidth();
        int getHeight();
        int getLength();

        //Declaration of setters
        void setWidth(int);
        void setHeight(int);
        void setLength(int);
};
