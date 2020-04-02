// CS1300 Fall 2019
// Author: Peter Jakubczak
// Recitation: 104 Pasricha
// Homework 2 #3

#include <iostream>
using namespace std; 

/**
 * Algorithm : that takes a paremeter and prints a greeting
 *  1. Output statement that prints "Hello, CS", then "World!"
 *  2. Main function that picks from a class greeting # and tests
 *  Input parameters : course number
 *  Output parameters : Welcomes user to CS world
 *  Return : none
 **/
 
void classGreeting(int courseNumber)
 {
     cout << " Hello, CS " << courseNumber << " World! " << endl; //output that welcomes user to CS world
     
 }  
int main()
 {
    classGreeting(1300); //first function call
    classGreeting(1500); //second function call
 }