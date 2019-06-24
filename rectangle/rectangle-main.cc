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
#include "rectangle.h"
//nasseef
using namespace std;

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
