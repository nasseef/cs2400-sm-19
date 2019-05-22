/*
 *        File: convert.cc
 *      Author: Nasseef Abukamail
 *        Date: May 22, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    //convert ch to lower case
    //check if capital
    if(ch >= 'A' && ch <= 'Z') {
        ch = (ch - 'A') + 'a';
    }
    cout << "ch = " << ch << endl;

    return 0;
}// main