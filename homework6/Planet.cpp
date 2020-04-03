//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 6 - Problem 1


/**
 * Algorithim: Creates planet functions
 * 1. Create each individual function from planet class
 * Input: Strings, doubles
 * Output: None
 * Return: None
*/



#include "Planet.h"
#include <string>
using namespace std;
#include <cmath>
#include <iostream>

Planet :: Planet(){
    planetName1 = ""; //empty name
    planetRadius1 = 0.0; //radius 0
}
Planet :: Planet(string planetName, double planetRadius){
    planetName1 = planetName; //sets input to class variables
    planetRadius1 = planetRadius; //sets input to class variables
}
string Planet :: getName(){
    return planetName1;
}
double Planet :: getRadius(){
    return planetRadius1;
}
void Planet :: setName(string planetName){
    planetName1 = planetName;
}
void Planet :: setRadius(double planetRadius){
    planetRadius1 = planetRadius;
}
double Planet :: getVolume(){
    return (4.0/3) * M_PI * pow(planetRadius1,3); //solves volume
}