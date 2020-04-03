//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 6 - Problem 2


/**
 * Algorithim: Creates max radius function
 * 1. Call maxRadius function for planet
 * 2. If numbers 0, return -1
 * 3. While loop that checks radius at that place in array, and chooses largest one
 * Input: Array and int
 * Output: None
 * Return: Maximum
*/



using namespace std;
#include <iostream>
#include "Planet.h"
#include <string>

int maxRadius(Planet objects[], int number){
    double Maximum = 0;
    int maxIndex = 0;
    int Index = 0;
    if (!(number != 0)){ //if number is 0, return -1
        return -1;
    }
    
    while(Index < number){
        if(objects[Index].getRadius() > Maximum){
            Maximum = objects[Index].getRadius(); //when radius is largest, its grabbed at index
            maxIndex = Index;
            
        }
       Index++;
    }
  return maxIndex;
    
}

int main(){
Planet planets[5];
planets[0] = Planet("On A Cob Planet",1234);
planets[1] = Planet("Bird World", 4321);
int idx = maxRadius(planets, 2);
cout << planets[idx].getName() << endl;
cout << planets[idx].getRadius() << endl;
cout << planets[idx].getVolume() << endl;


Planet planets[3];
planets[0] = Planet("Nebraska",13.3);
planets[1] = Planet("Flarbellon-7", 8.6);
planets[2] = Planet("Parblesnops", 6.8);
int idx = maxRadius(planets, 3);
cout << planets[idx].getName() << endl;
cout << planets[idx].getRadius() << endl;
cout << planets[idx].getVolume() << endl;

}
