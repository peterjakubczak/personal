// CS1300 Fall 2019
// Author: Peter Jakubczak
// Recitation: 104 Pasricha
// Homework 2 #4


#include <iostream>
#include <math.h>
using namespace std;
/**
 * Algorithm : that prints the volume and surface area of a sphere, with a given radius. 
 *  1. Output a statement that allows user to enter radius
 *  2. Volume equation that takes account the radius entered 
 *  3. Surface area equation that solves surface area using radius
 *  Input : None
 *  Output : Volume and surface area
 *  Return : None
**/ 

int main(){
    cout << "Enter a radius: " << endl;  //prompts user to enter radius
    double radius;
    cin >> radius; //input radius
    double volume;
    volume = (4.0/3.0) * M_PI * pow(radius, 3); //solve volume
    cout << "volume: " << volume << endl; // output volume
    
    double surface_area; //declares surface area as a double
    surface_area = (4 * M_PI * pow(radius, 2)); //surface area equation using radius above
    cout << "surface area: " << surface_area << endl; //outputs surface area
   
}
