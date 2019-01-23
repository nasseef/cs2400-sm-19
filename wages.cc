/*
 *        File: wages.cc
 *      Author: Nasseef Abukamail
 *        Date: January 23, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    //1, 2
    double rate, hours;
    hours = 30;
    rate = 10;
    
    //3 calculation
    double wages;
    wages = rate * hours;

    //4 output
    cout << "Wages = " << wages << endl;

    return 0;
}// main