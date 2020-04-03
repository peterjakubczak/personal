//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 3 - Problem 4

#include <iostream>
using namespace std;

/**
 * Algorithim: that counts how many digits a number has
 * 1. Function that takes the number
 * 2. Number is changed to be positive if its not, and digits is incremented while numbers being divided by 10 
 * 3. Main function tests the case
 * Input: integer
 * Output: none
 * Return: # of digits
*/

int countDigits(int number) //number is inserted
{
    int digits = 0;
    if (number < 0)
    {
        number = number * -1; //changes the number to be positive, if its negative
        
    }
    if (number == 0){ //specific case, if number is 0 then automatically make digits 1
        int digits = 1;
        return digits;
    }
    while (number > 0){
        number = number / 10; //takes number and divides by 10 as many times, and increments digits. 
        ++digits;
        
     }
    return digits;
    
}

int main(){
    countDigits(45678); //test case
    countDigits(-34343);
}

