/*
 *   File Name: formatting.cc
 *      Author: Nasseef Abukamail
 *        Date: May 20, 2019
 * Description: Example program to demonstrate different formatting options in
 * C++.
 *
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double value = 12345345678.12345678;
    cout << "Default display >" << value << endl;
    // Use only two digits in Scientific notation
    cout.precision(3);
    //cout << setprecision(3);
    cout << "Scientific, precision of 3 >" << value << "<" << endl;

    // When using fixed, use two digits after the decimal point
    cout.setf(ios::fixed);
    // cout << fixed;
    cout << "Fixed, precision of 3 >" << value << "<" << endl;

    // using setw
    int num = 1234;
    value = 3.14159;
    cout << "setw(10) right justification(default) >" << setw(10) << num
         << setw(10) << value << "<" << endl;

    cout << left << "setw(10) left justification >" << setw(10) << num << setw(10)
         << value << "<" << endl;
    return 0;
}
