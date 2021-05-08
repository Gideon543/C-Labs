#include<iostream>
#pragma once

class rectBlocks{
    protected:
        // Instance variables
        int width,height,length;

    public:
        // Declaration of Constructors
        rectBlocks();
        rectBlocks(int, int, int);

        // Declaration of Getters
        int getWidth();
        int getHeight();
        int getLength(); 

        // Declaration of Setters
        void setWidth(int);
        void setHeight(int);
        void setLength(int);
};
