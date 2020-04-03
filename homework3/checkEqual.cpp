//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 3 - Problem 2

#include <iostream>
using namespace std;

/**
 * Algorithim: that takes three numbers and decides if they are all the same, all different or neither
 * 1. Void function that declares the three integers
 * 2. If statements that compare the numbers and output if they are the same, different, or neither
 * 3. Main function tests the cases
 * Input: integers
 * Output: All same, all different, or neither
 * Return: None
*/
 
void checkEqual(int first, int second, int third){ //no return, so void function with three integers
    if (first == second && first == third && second == third){ //if all numbers are the same
        cout<<"All same"<< endl; //output "all same"
    }
    else if( first !=  second && first != third &&  second !=  third){ //if all integers are different
        cout<<"All different"<< endl; //output "all different"
    }
    else{  //for any other combination of 3 integers
        cout<<"Neither"<< endl; //output neither
    }
}

int main(){
    checkEqual(7,7,7); //test cases
    checkEqual(0,0,5);
}