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

class Student{
public:
    //accessors/getters
    int getId();

    //mutators/setters
    void setId(int newId);
private:
    int id;
    string name;
    double score;
};

//function prototypes
void printStudent( Student &s);
int main(int argc, char const *argv[]) {

    Student s;
    s.setId(5);
    s.setId(-7);
    printStudent(s);
    vector <Student> allStudents;
    allStudents.push_back(s);

    for (size_t i = 0; i < allStudents.size(); i++)
    {
        printStudent(allStudents[i]);
    }
    

    return 0;
}// main

void printStudent(Student &s){
    cout << "Id: " << s.getId() << endl;
    //cout << "Name: " << s.name << endl;
    //cout << "Score: " << s.score << endl;
}

int Student::getId(){
    return id;
}

void Student::setId(int newId){
    if (newId >= 0)
    {  
        id = newId;
    }
}