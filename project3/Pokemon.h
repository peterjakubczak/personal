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
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include "Pokemon.h"
using namespace std;


class Pokemon
{
    private:
    int index;
    string name;
    int hp;
    int attack;
    int defense;
    int speed;
    int max;
    string type;
    
    public:
    Pokemon();
    void setIndex(int x);
    void setName(string x);
    void setHP(int x);
    void setAttack(int x);
    void setDefense(int x);
    void setSpeed(int x);
    void setMax(int x);
    void setType(string x);
    string getName();
    int getHP();
    int getAttack();
    int getDefense();
    int getSpeed();
    int getMax();
    string getType();
    
};
#endif