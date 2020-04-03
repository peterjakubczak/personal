//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 9 - Problem 1


/**
 * Algorithim: that converts a decimal value to binary

   1. check if input is 0, return 0 as binary
   2. Go through each power of two and add on binary value
   3. Main test the case
   
 * Input: Integer
 * Output: None
 * Return: Returing a binary value as a string
*/
using namespace std;
#include <iostream>

string decimalToBinaryIterative(int input)
{
    string binary = ""; //empty string output
    if(input == 0)
    {
        binary = "0"; //returns 0 if input value is 0
        return binary;
    }
    do{
        int i = (input % 2);
        binary = to_string(i) + binary; //add to final binary
    }
    while(input = input / 2); //while powers of 2
    return binary;
}

int main()
{
    cout << decimalToBinaryIterative(5); //main test case
    cout << decimalToBinaryIterative(42);
}