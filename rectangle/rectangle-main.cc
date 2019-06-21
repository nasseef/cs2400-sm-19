/*
 *        File: rectangle-main.cc
 *      Author: Nasseef Abukamail
 *        Date: June 19, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
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

    void output()const; //display the rectangle
    double area() const;
private:
    double length;
    double width;
}; //; important

//function prototypes

int main(int argc, char const *argv[]) {
    Rectangle r;
    r.output();
    cout << endl;
    Rectangle r2(8, 5);
    r2.setLength(10);
    r2.output();
    cout << endl;
    cout << "Length: " << r2.getLength() << endl;
    return 0;
}// main

Rectangle::Rectangle(){
    length = width = 0;
}

Rectangle::Rectangle(double newLength, double newWidth){
    if (newLength < 0 || newWidth < 0)
    {
        length = width = 0;
    }
    else {
        length = newLength;
        width = newWidth;
    }
}

void Rectangle::output() const{
    cout << "(" << length << "x" << width << ")";
}

double Rectangle::getLength() const{
    return length;
}

void Rectangle::setLength(double newLength){
    if (newLength > 0)
    {
        length = newLength;
    }
    
}