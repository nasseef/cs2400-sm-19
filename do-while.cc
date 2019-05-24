/*
 *        File: do-while.cc
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

    int choice;
    do
    {
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter a choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "You entered 1" << endl;
                break;
            case 2:
                cout << "Entered 2" << endl;
                break;
            default:
                ;
        }
    }while(choice != 3);
    return 0;
}// main