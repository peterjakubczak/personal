// CS1300 Fall 2019
// Author: Peter Jakubczak
// Recitation: 104 Pasricha
// Homework 2 #2

#include <iostream>
using namespace std; 

/**
 * Algorithm : that takes an input from a user's integer value for a CS course number
 *  1. First you promt user to enter a course number 
 *  2. User enters course number
 *  3. Print "Hello, CS [course number] World!"
 * Input parameters: none
 * Output: Welcomes user into the CS class world
 * Return: none
 */
 
 int main()
 {
     int course_number;
     cout << "Enter a CS course number: "; //tells user to enter their course number
     cin >> course_number; //enters course number
     std::cout << "\nHello, CS " << course_number << " World!";
     
     
 }