#include "rectBlocks.h"
#include <iostream>
#include <vector>
using namespace std;

// Definition of default constructor
rectBlocks::rectBlocks(){}

// Definition of overloaded constructor
rectBlocks::rectBlocks(int width, int height, int length): width(width), height(height), length(length){}

// Definition of getters
int rectBlocks::getWidth(){
    return width;
}

int rectBlocks::getHeight(){
    return height;
}

int rectBlocks::getLength(){
    return length;
}

// Definition of setters
void rectBlocks::setWidth(int w){
    width = w;
}

void rectBlocks::setHeight(int h){
    height = h;
}

void rectBlocks::setLength(int l){
    length = l;
}

