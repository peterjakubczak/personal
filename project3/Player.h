//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Project 3


/**
 * Algorithim: Creates game class
  * 1. Set up public member functions
 * 2. Set up private member functions
 * Input: Strings, int, array 
 * Output: None
 * Return: None
*/
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Pokemon.h"
#include "Map.h"
using namespace std;
class Player{
    private:
    string name;
    int Pokeball;
    int active;
    int level;
    int points;
    int xPosition;
    int yPosition;
    
    
    public:
   
    Player();
    void setName(string x);
    void setyPosition(int x);
    void setxPosition(int x);
    void setPoints(int x);
    void setLevel(int x);
    Pokemon pokemons[10];
    string getName();
    int getActive();
    int getPokeball();
    int getyPosition();
    int getxPosition();
    int getPoints();
    int getLevel();
    
};
#endif