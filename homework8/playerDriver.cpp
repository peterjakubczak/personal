//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 8 - Problem 2


/**
 * Algorithim: that is the driver for Player.

   1. Main function

 * Input: Two int vectors
 * Output: Nothing
 * Return: new shuffled vector
*/

#include <iostream>
#include "Player.H"
using namespace std;

int main()
{
    Player peter;
    cout << peter.getName() << endl;
    cout << peter.getPoints() << endl;
    peter.setName("Peter");
    
    Player john("John", 5.6);
    cout << john.getName() << endl;
    cout << john.getPoints() << endl;
}
