/*
 *        File: overloaded-functions.cc
 *      Author: Nasseef Abukamail
 *        Date: May 31, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

double add(double x, double y);
double add(double x, double y, double z);

int main(int argc, char const *argv[]) {

    double a = 8, b = 9;

    cout << add(5, 6.0) << endl;
    cout << add(5, 6, 7) << endl;

    return 0;
}// main


double add(double x, double y){
    return x + y;
}
double add(double x, double y, double z){
    return x + y + z;
}