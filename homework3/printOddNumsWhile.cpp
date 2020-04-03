//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 3 - Problem 8
#include <iostream>
using namespace std;

/**
 * Algorithim: that prints all positive odd integers less than or equal to a max value
 * 1. Void function that takes starting number
 * 2. Takes number and adds 2 to it while the condition is set
 * 3. Main tests function
 * Input: integer
 * Output:the positive odd integers less than or equal to the max value
 * Return: nothing
*/

void printOddNumsWhile(int number){ 
    int start = 1;
    while (start <= number){ //makes sure the starting number doesnt become greater than the number inserted
       cout << start << endl;
       start = start + 2; //odd values
        
    }
}

int main(){
    printOddNumsWhile(34); //test case, expects 1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33
    printOddNumsWhile(21);
}
