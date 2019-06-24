#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;
class Rectangle{
public:
    Rectangle(); //default
    Rectangle(double newLength, double newWidth);
    //getters
    double getLength() const;
    double getWidth() const;

    //setters 
    void setLength(double newLength);
    void setWidth(double newWidth);

    friend ostream& operator <<(ostream &out, const Rectangle &r); //display the rectangle
    double area() const;
    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
private:
    double length;
    double width;
}; //; important
#endif