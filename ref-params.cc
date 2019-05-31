/*
 *        File: ref-params.cc
 *      Author: Nasseef Abukamail
 *        Date: May 31, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes
void swap(int &x, int &y);

int main(int argc, char const *argv[]) {

    int number1 = 5, number2 = 6;
    swap(number1, number2);
    cout << "Number 1: " << number1 << endl;
    cout << "Number 2: " << number2 << endl;

    return 0;
}// main

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}