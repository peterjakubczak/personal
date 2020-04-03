//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 3 - Problem 9
#include <iostream>
using namespace std;

/**
 * Algorithim: that prints all positive odd integers less than or equal to a max value
 * 1. Void function that takes starting number
 * 2. Takes a count of how many odd numbers there should be, based on starting value
 * 3. For loop that changes the actual number to its next value
 * 4. Main tests function
 * Input: integer
 * Output:the positive odd integers less than or equal to the max value
 * Return: nothing
*/

void printOddNumsFor(int number){
    int count = (number + 1)/2; //takes original number, and finds how many numbers should be printed
    int actualNumber = 1; //starting with 1
    for(int i=1; i <= count; i++){
       
            cout << actualNumber << endl;
            actualNumber = actualNumber + 2; //takes original number and goes to next odd number
        }
    
}
int main(){
    printOddNumsFor(8);
    printOddNumsFor(13);
}