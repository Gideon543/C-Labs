#include<iostream>
#include "rectBlocks.h"
#pragma once
using namespace std;

class sqrBaseRectBlocks : public rectBlocks{
    private:
        int width, height, length;
    public:
        //Constructors
        sqrBaseRectBlocks();
        sqrBaseRectBlocks(int,int,int);

        //Declaration of Getters
        int getWidth();
        int getHeight();
        int getLength();

        //Declaration of setters
        void setWidth(int);
        void setHeight(int);
        void setLength(int);
};
