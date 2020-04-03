// CS1300 Fall 2019
// Author: Peter Jakubczak
// Recitation: 104 Pasricha
// Homework 2 #9

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Algorithm : that calculates carnot efficiency
 *  1. Create double function carnot
 *  2. Calcuates carnot efficiency
 *  3. Returns the calculation of carnot
 *  4. Main tests the case
 * Input : cold temp and hot temp
 * Output : Nothing
 * Return : carnot efficiency
 **/
 
double carnot(int coldTemp, int hotTemp){
     double x = 1- (coldTemp * 1.0 /hotTemp * 1.0); //creates equation for carnot efficiency
     return x; 
    
}
 int main(){
     cout << carnot(20, 60); //test case 1
     cout << carnot(40, 32); //test case 2
     
     
}