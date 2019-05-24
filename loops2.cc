/*
 *        File: loops2.cc
 *      Author: Nasseef Abukamail
 *        Date: May 24, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    int count = 0;
    int total = 0;
    int number;
    while (count < 5)
    {
        cout << "Enter a number: ";
        cin >> number;
        total += number;
        count++;
    }

    cout << "Total: " << total << endl;
    double average = total / 5.0;
    cout << "Average: " << average << endl;
    return 0;
}// main