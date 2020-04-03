//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 8 - Problem 2


/**
 * Algorithim: that creates the player class

   1. Creative private variables in class
   2.Create public functions
   
 * Input: String, double
 * Output: 
 * Return: 
*/
#include <string>
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H

class Player{
     private: //private variables
     string name; //players name
     double points; //players points
    
    public: //sets up functions
    Player();
    Player(string, double);
    string getName();
    double getPoints();
    void setName(string);
    void setPoints(double);
    
    
};
#endif