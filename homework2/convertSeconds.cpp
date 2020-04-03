// CS1300 Fall 2019
// Author: Peter Jakubczak
// Recitation: 104 Pasricha
// Homework 2 #7

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Algorithm : that converts seconds into hours, minutes, seconds
 *  1. Create void function that converts seconds
 *  2. Creates hours and minutes, and converts seconds
 *  3. Main function that tests the case
 *  Input : seconds
 *  Output : time in hours, minutes, seconds
 *  Return : nothing
 **/
 
 void convertSeconds(int seconds){ //function won't return anything, but will convert seconds
     int hours; //declare hours
     int minutes; //declare minutes
     cin >> seconds; //input seconds
     minutes = (seconds / 60); //convert seconds to minutes
     hours = (minutes / 60); //convert minutes to hours
     cout << int(hours) << " hour(s) " << int(minutes%60) << " minute(s) " << int(seconds%60) << " second(s)"; //output time in hours, minutes, seconds
}

int main(){
    convertSeconds(5467); //test case 1
    convertSeconds(5302); //test case 2
}