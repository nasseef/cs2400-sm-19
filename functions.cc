/*
 *        File: functions.cc
 *      Author: Nasseef Abukamail
 *        Date: May 29, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototype (function declaration)
int cube(int value);
void printInstructions();
void printResults(int number, int numberCubed);

int main(int argc, char const *argv[]) {

    int number = 5;
    printInstructions();
    int numberCubed = cube(number); //function call

    printResults(number, numberCubed);
    printResults(4, cube(4));
    
    int y = cube(cube(2)) * 2;
    cout << "y = " << y << endl;
    //cube(1000); //wastes time
    return 0;
}// main

//function definition
int cube(int value) //function heading
{//function body
    int result; //local variable
    result = value * value * value;
    return result;
}

void printInstructions() {
    cout << "This program finds the cube of a number" << endl;
}

void printResults(int number, int numberCubed) {
     cout << number << " cubed is " << numberCubed << endl;
}