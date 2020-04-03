//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 9 - Problem 2


/**
 * Algorithim: that converts a decimal value to binary using recursive

   1. Check if input is less than 2, print 1 or 0
   2. Go through input value, get the remainder, add remainder to binary
   3. Recursive calls it again and divides it by two each time
   4. Main tests function
   
 * Input: Integer
 * Output: None
 * Return: Returing a binary value as a string
*/
using namespace std;
#include <iostream>

string decimalToBinaryRecursive(int input)
{
    string binary = ""; //empty string output
    if(input < 2)
    {
        binary = to_string(input); //returns either 0 or 1 if input value is less than 2
        return binary;
    }
    if(input >= 2)
    {
       int i = (input % 2); //grabs remainder
       binary = decimalToBinaryRecursive(input / 2) + to_string(i);  //call it again, and convert integer remainder to string
    }
    return binary;
}

int main()
{
    cout << decimalToBinaryRecursive(5) << endl; //main test case
    cout << decimalToBinaryRecursive(42);
}