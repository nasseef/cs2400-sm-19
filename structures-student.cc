/*
 *        File: structures-student.cc
 *      Author: Nasseef Abukamail
 *        Date: June 17, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

struct Student{
    int id;
    string name;
    double score;
};

//function prototypes
void printStudent(const Student &s);
int main(int argc, char const *argv[]) {

    Student s = {3, "Bob", 56.7};
    s.id = -7;
    printStudent(s);
    vector <Student> allStudents;
    allStudents.push_back(s);
    Student s2 = {45, "Jim", 90};
    allStudents.push_back(s2);
    for (size_t i = 0; i < allStudents.size(); i++)
    {
        printStudent(allStudents[i]);
    }
    

    cout << allStudents[0].name << endl;
    return 0;
}// main

void printStudent(const Student &s){
    cout << "Id: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Score: " << s.score << endl;
}