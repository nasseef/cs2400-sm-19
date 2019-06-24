#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include "rectangle.h"
//nasseef
using namespace std;

Rectangle::Rectangle(){
    length = width = 0;
}

Rectangle::Rectangle(double newLength, double newWidth){
    if (newLength <= 0 || newWidth <= 0)
    {
        length = width = 0;
    }
    else {
        length = newLength;
        width = newWidth;
    }
}

//getters
double Rectangle::getLength() const{
    return length;
}
double Rectangle::getWidth() const{
    return width;
}

//setter functions
void Rectangle::setLength(double newLength) {
    if (newLength > 0)
    {
        length = newLength;
    }

}
void Rectangle::setWidth(double newWidth) {
    if (newWidth > 0)
    {
        width = newWidth;
    }
}


double Rectangle::area() const{
    return length * width;
}
ostream& operator <<(ostream &outs, const Rectangle &r){
    outs << "(" << r.length << "x" << r.width << ")";
    return outs;
}

bool operator ==(const Rectangle &r1, const Rectangle &r2){
    if (r1.length == r2.length && r1.width == r2.width)
    {
        return true;
    }
    return false;
}