//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 3 - Problem 6
#include <iostream>
using namespace std;

/**
 * Algorithim: that checks if a year is a leap year or not
 * 1. Year is taken in function bool which returns true or false
 * 2. Year goes through the if statements and decides if it's a leap year or not
 * 3. Main tests the function 
 * Input: integer
 * Output: none
 * Return: boolean true or false leap year
*/

bool checkLeapYear(int year) 
{
    bool answer = false;
    if (year <= 1582) //if year is before 1582
    {
        year%4 == 0; //if no remainder when divided by 4
        answer = 1; //year is a leap year
    }
    if (year > 1582)
    {
        if (year % 4 == 0)
        {
         answer = 1;
          if (year % 100 == 0) //if year is divided by 100 and has no remainder, its not a leap year
         {
            answer = 0;
         }
         if (year % 100 == 0 && year % 400 == 0) //if year divided by 400 and 100 has no remainder, it is a leap year
         {
             answer = 1;
         }
        
        } 
     }
    if (year % 4 != 0){ //if year has a remainder when divided by 4
       answer = 0; //it is not a leap year
    }
    return answer;
}
int main(){
    bool value;
    value = checkLeapYear(1700); //test case
    cout << value << endl;
    bool value2;
    value2 = checkLeapYear(1111);
    cout << value2 << endl;
    
}