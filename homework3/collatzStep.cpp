//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 3 - Problem 1

#include <iostream>
using namespace std;

/**
 * Algorithm: that returns a value that is next in the Collatz sequence
 * 1. Int function that grabs input # from user
 * 2. If statement that chooses between even #, odd #, or negative #, and returns proper value
 * 3. Main function tests case
 * Input: Integer
 * Output: None
 * Return: Integer
*/

int collatzStep(int input){ //function that grabs input #
    if (input%2 == 0) //checks if input is even
        return input/2;
    else if (input%2 > 0) //checks if input is odd
        return 3*input+1;
    else
        return 0;
    }
 int main(){
     collatzStep(5); //test cases
     collatzStep(-6);
 }
 