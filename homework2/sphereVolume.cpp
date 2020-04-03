// CS1300 Fall 2019
// Author: Peter Jakubczak
// Recitation: 104 Pasricha
// Homework 2 #5

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Algorithm : that determines the volume of a sphere with a given radius
 *  1. Write a void function that takes radius and creates volume variable
 *  2. Main will test your case
 *  Input : radius
 *  Output : volume of a sphere
 *  Return : none
**/ 

void sphereVolume(double radius){ //function that doesn't have a return value, but calculates volume
    cin >> radius; //user input radius
    double volume; //declare volume
    volume = (4.0/3.0) * M_PI * pow(radius, 3); //volume equation for sphere
    cout << "volume: " << volume << endl;
}

int main(){
    sphereVolume(5); //test case 1
    sphereVolume(6); //test case 2
}
