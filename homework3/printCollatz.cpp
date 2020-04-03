//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 3 - Problem 7
#include <iostream>
using namespace std;

/**
 * Algorithim: that prints the whole collatz sequence
 * 1. Void function that takes number
 * 2. If the number isnt greater than 0, its invalid
 * 3. Manipulates number if its even or odd
 * 4. Main tests cases
 * Input: integer
 * Output: the collatz sequence
 * Return: nothing
*/

void printCollatz(int number){
    if(number == 0 || number < 0){ //case if number isn't a positive
            cout << "invalid number"<< endl;
        }
    else{
        cout<< number << " ";
        while(number != 1){ //if the number is odd
            if (number % 2 == 1)
                number = 3 * number + 1; //multiply by three, add one
            else
                number /= 2; //if even just divide by two
            
            cout<< number << " ";    
        }
    }
    
}
int main(){
   
     printCollatz(56); //test case
    
   
     printCollatz(6);
   
}