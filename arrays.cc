/*
 *        File: arrays.cc
 *      Author: Nasseef Abukamail
 *        Date: June 07, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    
    int scores[7] = {50, 60, 20, 40};//elements 4-6 contain garbage
    int scores2[] = {50, 60, 20, 40}; //creates 4 elements

    int count = 4;
    for (size_t i = 0; i < count; i++)
    {
        cout << scores[i] << endl;
    }
    
    

    return 0;
}// main