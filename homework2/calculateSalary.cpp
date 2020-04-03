// CS1300 Fall 2019
// Author: Peter Jakubczak
// Recitation: 104 Pasricha
// Homework 2 #10

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Algorithm : that calculates total money based on days worked in rainy, cold, and sunny weather
 *  1. Create a function calculateSalary
 *  2. 3 parameters for the 3 days
 *  3. Returns calculation of money made 
 *  4. Main tests the case
 * Input : rainy days, cold days, sunny days
 * Output : Nothing
 * Return : Money made 
 **/
 
int calculateSalary(int rainyDays, int coldDays, int sunnyDays){ //function with the three parameters
    return rainyDays * 10 * 5 //takes hours worked and salary combination
        + coldDays * 10 * 4
        + sunnyDays * 10 * 8;
        
}
int main(){
    cout << calculateSalary(5,7,9); //test case 1
    cout << calculateSalary(10,50,2); //test case 2
}