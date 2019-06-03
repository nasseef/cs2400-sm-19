/*
 *        File: files.cc
 *      Author: Nasseef Abukamail
 *        Date: June 03, 2019
 * Description: A program to demonstrate file I/O.
 */

/*
 * Extra Credit (Undergraduate students), Due: Tuesday June 4, 2019 at 11:59 PM:
 * Modify your Word Count homework to read a text files instead of keyboard input.
 *
 * Create a private repository on GitHub, add me as a collaborator, push your code to the repository and
 * tag me (@nasseef) under the comment section of the final commit message.
 * Please make sure your program works before you tag me.
 * Do not email me your program. I will only accept GitHub repositories.
 *
 * Graduate students are welcome to do this exercise and I'll be happy to check it for you.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;
    //declare the stream object
    ifstream inStream; //ifstream is a class
    inStream.open(fileName.c_str()); //open is a member function
    if (inStream.fail())
    {
       cout << "Error opening the file" << endl;
       exit(0);
    }
    //file opened successfully
    int number;
    // inStream >> number;
    // while (!inStream.eof())
    // {
    //     cout << "number is " << number << endl;
    //     inStream >> number;
    // }

    // while (inStream >> number)
    // {
    //     cout << "number is " << number << endl;
    // }

    // char ch;
    // while (inStream.get(ch))
    // {
    //     cout << "char is " << ch << endl;
    // }

 string line;
    while (getline(inStream, line))
    {
        cout << "line is " << line << endl;
    }
    inStream.close();
    return 0;
}// main