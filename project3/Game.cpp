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
#include "Game.h"
using namespace std;
int split(string str, char c, string array[], int length){
    if(str == ""){ //If string is empty
        return 0;
    }
    int i = 0;
    if(str[0] == c){ //if string at 0 is equal to char c
        i = 1;
    }
    int length1 = str.length();
    int numStrings = 0;
    int arrayCount = 0;
    string x = "";
    char f;
    str += c; 
    while(i < length1 + 1){ //loop until size of string line
        string position = str.substr(i,1);
        f = str[i]; //add characters to word
        if(f != c){ //|| (str[i+1] == c)){
            x += position;
        }
        else if(x != "" ){
            numStrings ++;
            array[arrayCount] = x;
            x = "";
            arrayCount++; 
        }
    
       i++;
       }
       
     return numStrings;
    }
    
void Game :: firstMenu(){
    cout << "Welcome to Pokemon!" << endl;
    cout << "Please state your name:";
    getline(cin,name);
    person.setName(name);
    while(true){
    cout << "Welcome, " << person.getName() << "! Before you can begin your Pokemon adventure, you must choose a starting pokemon, courtesy of the Professor. Please choose from the following Pokemon:" << endl;
    cout << "1. Bulbasaur" << endl;
    cout << "2. Charmander" << endl;
    cout << "3. Squirtle" << endl;
    cout << "4. Pikachu" << endl;
    getline(cin,choice);
    num = stoi(choice);
    switch(num){
        case 1: //sets position of pokemon
        person.pokemons[0] = allPokemon[0];
        person.setxPosition(6);
        person.setyPosition(12);
        break;
        case 2:
        person.pokemons[0] = allPokemon[3];
        person.setxPosition(7);
        person.setyPosition(12);
        break;
        case 3:
        person.pokemons[0] = allPokemon[6];
        person.setxPosition(8);
        person.setyPosition(12);
        break;
        case 4:
        person.pokemons[0] = allPokemon[24];
        person.setxPosition(9);
        person.setyPosition(12);
        break;
        default:
        cout << "Sorry, this is not an option." << endl;
        continue;
        
     }
     cout << "Congratulations! You have chosen " << person.pokemons[0].getName() << "!" <<endl;
     break;
     int randPoke;
    srand(time(NULL));
    for(int i = 0; i < 20; i++){
        randPoke = rand() % 151;
        for(int j = 0; j < i; j++){
            if(i >= 1){
                if(wildPokemon[i].getName() == wildPokemon[j].getName()){
                    i--;
                    continue;
                }
            }
        }
        wildPokemon[i] = allPokemon[randPoke];
        cout << i << ". "<< wildPokemon[i].getName() << endl;
    }
    } 
}
Game :: Game(){
    string temp;
    string array[9];
    string mapArr[16];
    ifstream file;
    int i = 0;
    int j = 0;
    int z = 0;
    char c = ',';
    file.open("pokemon.txt"); //opens pokemon
   
    while (getline(file, temp)){
        split(temp,c,array,9); //fills all pokemon array
        allPokemon[i].setIndex(stoi(array[0]));
        allPokemon[i].setName(array[1]);
        allPokemon[i].setHP(stoi(array[2]));
        allPokemon[i].setAttack(stoi(array[3]));
        allPokemon[i].setDefense(stoi(array[4]));
        allPokemon[i].setSpeed(stoi(array[5]));
        allPokemon[i].setMax(stoi(array[6]));
        allPokemon[i].setType(array[7]);
        i++;
    }
    file.close();
}
void Game::mainMenu(){
    cout << "It's an amazing day! You have " << person.getPokeball() << " pokeballs left." << endl; //prints out pokemalls and atributes
    cout << "Name: " << person.pokemons[person.getActive()].getName() << endl;
    cout << "HP: " << person.pokemons[person.getActive()].getHP() << endl;
    cout << "Attack: " << person.pokemons[person.getActive()].getAttack() << endl;
    cout << "Defense: " << person.pokemons[person.getActive()].getDefense() << endl;
    cout << "Speed: " << person.pokemons[person.getActive()].getSpeed() << endl;
    cout << "Max: " << person.pokemons[person.getActive()].getMax() << endl;
    cout << endl;
    cout <<"Please choose from the following options:" << endl;
    cout << "1. Travel" << endl;
    cout << "2. Rest" << endl;
    cout << "3. Try your luck" << endl;
    cout << "4. Quit the game" << endl;
    cin >> choice;
    num = stoi(choice);
}