/*
 *        File: for.cc
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

    int i;
    for (i = 1; i < 10; i *= 2)
    {
        cout << i << endl;
    }
    return 0;
}// main