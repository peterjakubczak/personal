// CS1300 Fall 2019
// Author: Peter Jakubczak
// Recitation: 104 Pasricha
// Homework 2 #8

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Algorithm : that calculates population in a year
 *  1. Creating an int function that takes starting population
 *  2. Calculate population after one year based on rates of birth, deaths, and immigrants
 *  3. Returns the population after one year
 *  4. Main tests the case
 * Input : Population
 * Output : Nothing
 * Return : population after one year
 **/
 
 int population(int initialPopulation){
     int secondsYear = 365 * 24 * 60 * 60; //seconds contained in a year
     int finalPopulation = initialPopulation + (secondsYear/8) + (secondsYear/27) - (secondsYear/12); //New population with birth, death, and immigrant rate added
     return finalPopulation; //returns population
 }
int main(){
    cout << population(574596); //test case 1
    cout << population(25334); //test case 2
}