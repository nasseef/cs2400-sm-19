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
    if(rate <= 0 || rate > 150) {
        cout << "Error: invalid rate. Enter 0 < rate <= 150" << endl;
        return 0;
    }
    cout << "Enter the hours: ";
    cin >> hours;
    if(hours < 0 || hours > 120){
        cout << "Error: invalid number of hours. Enter a number"
             << " between 0 and 120" << endl;
        return 0;
    }
    //2. Calculation
    //a

    //calculate overtime

    if(hours <= 40){
        wages = rate * hours;
    }
    else {
        double overtime = (hours - 40) * rate * 1.5;
        wages = rate * 40 + overtime;
    }


    //b
    cout << "Wages: $" << wages << endl;

    return 0;
}// main