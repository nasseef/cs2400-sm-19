/*
 *        File: sentinel.cc
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
    double number;
    double smallest;
    cout << "Enter a number: ";
    cin >> number;
    smallest = number;
    while (number >= 0)
    {
        total += number;
        count++;
        if (number < smallest)
        {
            smallest = number;
        }

        cout << "Enter a number: ";
        cin >> number;
    }

    cout << "Total: " << total << endl;
    if(count != 0){
        double average = total / static_cast <double> (count);
        cout << "Average: " << average << endl;
        cout << "Smallest: " << smallest << endl;
    }
    else {
        cout << "There were no number entered" << endl;
    }

    count = 0;
    while (true)
    {
        cout << "Hello" << endl;
        count++;
        // if (count == 5)
        // {
        //     break;
        // }

    }

    return 0;

}// main