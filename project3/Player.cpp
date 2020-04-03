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
#include <iostream>
#include "Pokemon.h"
#include "Player.h"
using namespace std;

Player :: Player(){
    name = "";
    Pokeball = 10;
    active = 0;
    points = 0;
    level = 1;
    xPosition = 0;
    yPosition = 0;
    
}


void Player :: setName(string x){
    name = x;
}
void Player :: setyPosition(int x){
    yPosition = x;
}
void Player :: setxPosition(int x){
    xPosition = x;
}
void Player :: setPoints(int x){
    points = x;
}
void Player :: setLevel(int x){
    level = x;
}

string Player ::  getName(){
    return name;
}
int Player :: getyPosition(){
    return yPosition;
}
int Player :: getxPosition(){
    return xPosition;
}
int Player :: getPoints(){
    return points;
}
int Player :: getActive(){
    return active;
}
int Player :: getPokeball(){
    return Pokeball;
}
int Player :: getLevel(){
    return level;
}
extern Pokemon allPokemon[151];
extern Pokemon wildPokemon[20];
extern Player trainer[15];
extern Player person;