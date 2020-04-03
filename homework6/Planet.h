//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 6 - Problem 1


/**
 * Algorithim: Creates planet class
 * 1. Set up public member functions
 * 2. Set up private member functions

 * Input: Strings, doubles
 * Output: None
 * Return: None
*/
#include <string>
using namespace std;
#ifndef PLANET_H
#define PLANET_H

class Planet{
    public: //sets up functions
    Planet();
    Planet(string planetName, double planetRadius);
    string getName();
    void setName(string planetName);
    double getRadius();
    void setRadius(double planetRadius);
    double getVolume();
    private:
    string planetName1; //name of planet
    double planetRadius1; // radius of planet
};

#endif

