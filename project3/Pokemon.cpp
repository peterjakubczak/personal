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
#include "Map.h"
using namespace std;
Pokemon :: Pokemon(){
    index = 0;
    name = "";
    hp = 0;
    attack = 0;
    defense = 0;
    speed = 0;
    max = 0;
    type = "";
}
void Pokemon :: setIndex(int x){ //sets index
    index = x;
}
void Pokemon :: setName(string x){ //sets name 
    name = x;
}
void Pokemon :: setHP(int x){ //sets hp
    hp = x;
}
void Pokemon :: setAttack(int x){
    attack = x;
}
void Pokemon :: setDefense(int x){
    defense = x;
} 
void Pokemon :: setSpeed(int x){
    speed = x;
}
void Pokemon :: setMax(int x){
    max = x;
}
void Pokemon :: setType(string x){
    type = x;
}



string Pokemon :: getName(){
    return name;
}
int Pokemon :: getHP(){
    return hp;
}
int Pokemon :: getAttack(){
    return attack;
}
int Pokemon :: getDefense(){
    return defense;
}
int Pokemon :: getSpeed(){
    return speed;
}
int Pokemon :: getMax(){
    return max;
}
string Pokemon :: getType(){
    return type;
} 