//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 3 - Problem 5

#include <iostream>
using namespace std;

/**
 * Algorithim: that counts how many hours are in a month
 * 1. Function that takes the month #
 * 2. Switch will take the month #, and pick the case it corresponds too
 * 3. Main tests the function
 * Input: integer
 * Output: none
 * Return: # of hours
*/

int countHours(int month)
{
    int hours = 0;
    switch (month) //switch takes the month #, and picks the right case
    {
        case 1:
        return 744;
        case 2:
        return 672;
        case 3:
        return 744;
        case 4:
        return 720;
        case 5:
        return 744; //returns hours in the certain month
        case 6:
        return 720;
        case 7:
        return 744;
        case 8:
        return 744;
        case 9:
        return 720;
        case 10:
        return 744;
        case 11:
        return 720;
        case 12:
        return 744;
        
     }
    
}

int main(){
    countHours(2);
    countHours(5); //test cases
}