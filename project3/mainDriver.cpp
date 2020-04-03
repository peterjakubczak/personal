#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "Pokemon.h"
#include "Player.h"
#include "Map.h"
Pokemon allPokemon[151];
Pokemon wildPokemon[20];
Player trainer[15];
Player person;
#include "Game.h"
using namespace std;

int main(){
    Game run;
    run.firstMenu();
    run.land.displayMap(person.getyPosition(),person.getxPosition());
    run.mainMenu();
   //myGame.gameMenu();
    
    return 0;
}