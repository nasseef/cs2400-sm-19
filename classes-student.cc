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
    //Constructors
    Student(); //Default constructor
    Student(int newId); //Default constructor
    Student(int newId, string newName);
    Student(int newId, string newName, double score);
    //accessors/getters
    int getId() const;
    string getName() const;
    double getScore() const; 
    //mutators/setters
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //helper function
    char getGrade() const;
    void clear(); //reset to defaults
    bool isPassing() const;

private:
    int id;
    string name;
    double score;
};

//function prototypes
void printStudent( const Student &s);
int main(int argc, char const *argv[]) {

    Student s; //call the constructor
    printStudent(s);
    Student s2(123, "Jim");
    printStudent(s2);
    s.setId(5);
    s.setId(-7);
    s.setName("Bob");
    s.setScore(-1);
    printStudent(s);
    // vector <Student> allStudents;
    // allStudents.push_back(s);

    // for (size_t i = 0; i < allStudents.size(); i++)
    // {
    //     printStudent(allStudents[i]);
    // }
    

    return 0;
}// main

void printStudent(const Student &s){
    cout << "Id: " << s.getId() << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Score: " << s.getScore() << endl;
}

int Student::getId() const{
    return id;
}

string Student::getName() const{
    return name;
}
double Student::getScore() const{
    return score;
}
void Student::setId(int newId){
    if (newId >= 0)
    {  
        id = newId;
    }
}
void Student::setName(string newName){
    if (newName != "")
    {
        name = newName;
    } 
}

void Student::setScore(double newScore){
    if (newScore >= -1)
    {
        score = newScore;
    }
    
}

Student::Student(){
    id = 0; 
    name = "N/A";
    score = -1;
}

Student::Student(int newId, string newName){
    id = newId >= 0 ? newId : 0;
    name = newName == "" ? "N/A": newName;
    score = -1;
}