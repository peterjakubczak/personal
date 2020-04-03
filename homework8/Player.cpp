//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 8 - Problem 2


/**
 * Algorithim: that creates the functions in class player

   1. Initalize each function in class
   
 * Input: Strings, doubles
 * Output: Nothing
 * Return: Strings, doubles
*/

#include "Player.h"
#include <string>
using namespace std;
#include <cmath>
#include <iostream>

Player :: Player()
{
    string name = ""; //empty string
    double points = 0.0;
}
Player :: Player(string name1, double points1)
{
    name = name1; //sets name to parameter
    points = points1;
}

string Player :: getName()
{
    return name; //function that returns name
}
double Player :: getPoints()
{
    return points;
}
void Player :: setName(string name1)
{
    name = name1;
}
void Player :: setPoints(double points1)
{
    points = points1;
}