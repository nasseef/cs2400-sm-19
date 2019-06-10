/*
 *        File: arrays.cc
 *      Author: Nasseef Abukamail
 *        Date: June 07, 2019
 * Description: Add Description
 */
/*
 * Extra Credit (Undergraduate students), Due: Tuesday June 11, 2019 at 11:59 PM:
 * 
 * Modify the fillUp program to take an input stream. The stream will be passed to the 
 * function from the main program. Use the stream to read the data from a text file
 * instead of cin. Your function should also return the number of scores read from the 
 * file (count). All other functions in this program should work without modifications.
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
using namespace std;

//function prototypes
void fillUP(int numbers[], int count);
void printArray(const int numbers[], int count);
int getTotal(const int numbers[], int count);
double getAverage(const int numbers[], int count);
int getSmallest(const int numbers[], int count);
int search(const int numbers[], int count, int target);
bool isFound(const int numbers[], int count, int target);

int main(int argc, char const *argv[]) {

    
    int scores[10];//elements 4-6 contain garbage
    
    int count = 4;
    fillUP(scores, count);
    printArray(scores, count);
    int total = getTotal(scores, count);
    cout << "Total: " << total << endl;
    cout << "average: " << getAverage(scores, count) << endl;
    cout << "Smallest value: " << getSmallest(scores, count) << endl;
    cout << "search index: " << search(scores, count, 5) << endl;

    return 0;
}// main

void fillUP(int numbers[], int count) {
    cout << "Enter " << count << " integers" << endl;
    for (size_t i = 0; i < count; i++)
    {
        cin >> numbers[i];
    }
    
}


void printArray(const int numbers[], int count) {
    for (size_t i = 0; i < count; i++)
    {
        cout << i << ": " << numbers[i] << endl;
    }
    
}

int getTotal(const int numbers[], int count) {
    int total = 0;
    for (size_t i = 0; i < count; i++)
    {
        total += numbers[i];
    }
    return total;
}

double getAverage(const int numbers[], int count) {
    double total = getTotal(numbers, count);
    return total / count;
}

int getSmallest(const int numbers[], int count){
    int smallest = numbers[0];
    for(int i = 1; i < count; i++){
        if(numbers[i] < smallest){
            smallest = numbers[i];
        }
    }
    return smallest;
}

int search(const int numbers[], int count, int target) {
    for(int i = 0; i < count; i++){
        if(numbers[i] == target){
            return i;
        }
    }
    //target is not found
    return -1;
}

bool isFound(const int numbers[], int count, int target) {
    if(search(numbers, count, target) >= 0){
        return true;
    }
    return false;

    //return search(numbers, count, target) >= 0;
}