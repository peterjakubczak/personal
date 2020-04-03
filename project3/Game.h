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
#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "Pokemon.h"
#include "Player.h"
#include "Map.h"
using namespace std;
class Game{
    private:
    string name;
    string choice;
    int num;
    
    public:
    Map land;
    Game();
    void firstMenu();
    void mainMenu();
};



#endif