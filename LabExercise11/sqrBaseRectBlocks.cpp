#include "sqrBaseRectBlocks.h"

using namespace std;
// Definition of default constructor
sqrBaseRectBlocks::sqrBaseRectBlocks(){};

// Definition of overloaded constructor
sqrBaseRectBlocks::sqrBaseRectBlocks(int width, int height,int length): width(width), height(height), length(length){};

// Definition of getters
int sqrBaseRectBlocks:: getWidth(){return width;}
int sqrBaseRectBlocks:: getHeight(){return height;}
int sqrBaseRectBlocks:: getLength(){return length;}

// Definition of setters
void sqrBaseRectBlocks:: setWidth(int a){width = a;}
void sqrBaseRectBlocks:: setHeight(int b){height = b;}
void sqrBaseRectBlocks:: setLength(int c){length = c;}