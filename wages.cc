/*
 *        File: wages.cc
 *      Author: Nasseef Abukamail
 *        Date: May 15, 2019
 * Description: Calculate the wages for an hourly employee
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    //1.
    //variable declaraion
    double rate; //initialize rate
    double hours;
    double wages;

    cout << "Enter the rate: ";
    cin >> rate;
    if(rate <= 0) {
        cout << "Error: invalid rate. Enter > 0" << endl;
        return 0;
    }
    cout << "Enter the hours: ";
    cin >> hours;
    if(hours < 0){
        cout << "Error: invalid number of hours. Enter >= 0" << endl;
        return 0;
    }
    //2. Calculation
    //a

    wages = rate * hours;

    //b
    cout << "Wages: $" << wages << endl;

    return 0;
}// main