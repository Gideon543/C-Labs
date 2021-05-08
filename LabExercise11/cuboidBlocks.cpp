#include "cuboidBlocks.h"

// Define default constructor
cuboidBlocks::cuboidBlocks(){};

// Definition of overloaded constructor
cuboidBlocks::cuboidBlocks(int width, int height,int length): width(width), height(height), length(length){};

// Definition of getters
int cuboidBlocks:: getWidth(){return width;}
int cuboidBlocks:: getHeight(){return height;}
int cuboidBlocks:: getLength(){return length;}

// Definition of setters
void cuboidBlocks:: setWidth(int a){width = a;}
void cuboidBlocks:: setHeight(int b){height = b;}
void cuboidBlocks:: setLength(int c){length = c;}