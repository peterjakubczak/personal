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
#ifndef MAP_H
#define MAP_H
#include <fstream>
#include "Map.h"
using namespace std;
class Map{
    private:
    string map[25][16];
    public:
    Map();
    void displayMap(int x, int y);
};

#endif