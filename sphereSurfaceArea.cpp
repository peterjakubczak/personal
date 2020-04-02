// CS1300 Fall 2019
// Author: Peter Jakubczak
// Recitation: 104 Pasricha
// Homework 2 #6

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Algorithm : that solves surface area of a sphere, with a given radius, and prints it
 *  1. Write a void function that takes radius and gets surface area equation
 *  2. Main function tests the case
 *  Input : radius
 *  Output : surface area of a sphere
 *  Return : none
 **/
 
 void sphereSurfaceArea(double radius){ //function that doesn't return anything, but will get surface area
     cin >> radius; //user input radius
     double surfaceArea ; //declares surface area
     surfaceArea = (4 * M_PI * pow(radius, 2)); //surface area for a sphere
     cout << "surface area: " << surfaceArea << endl; //prints surface area
     
 }
 int main(){
  sphereSurfaceArea(12); //test case 1
  sphereSurfaceArea(17); //test case 2
 }