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

    //1
    double rate;

    cout << "Enter the rate: ";
    cin >> rate;
    //2
    double  hours;
    cout << "Enter the number of hours: ";
    cin >> hours;

    //3 calculation
    double wages;
    wages = rate * hours;

    //4 output
    cout << "Wages = " << wages << endl;
    return 0;
}// main