/*
 *        File: rectangle-main.cc
 *      Author: Nasseef Abukamail
 *        Date: June 19, 2019
 * Description: Add Description
 */

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

//function prototypes

int main(int argc, char const *argv[]) {
    Rectangle r;
    cout << r << endl;
   
    Rectangle r2(8, 5);
    r2.setLength(10);
    cout << r2 << endl;
   
    cout << "Length: " << r2.getLength() << endl;
    Rectangle r3(10, 5);
    if (r3 == r2)
    {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not equal" << endl;
    }
  
    
    return 0;
}// main

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