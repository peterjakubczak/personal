#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
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
void Pokemon :: setIndex(int x){
    index = x;
}
void Pokemon :: setName(string x){
    name = x;
}
void Pokemon :: setHP(int x){
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
Pokemon allPokemon[151];
Pokemon wildPokemon[20];
Player trainer[15];
Player person;

class Map{
    private:
    string map[25][16];
    public:
    Map();
    void displayMap(int x, int y);
};

Map :: Map(){
    ifstream file;
    string temp;
    string arr[16];
    int i = 0;
    char c = ',';
    file.open("mapPoke.txt");
    while(getline(file, temp)){
        split(temp,c,arr,16);
        for(int j = 0; j < 16; j++){
            map[i][j] = arr[j];
        }
        i++;
    }
    
}

void Map::displayMap(int x, int y){
    for(int j = x - 3; j <= x + 3; j++){
        if(j < 0 || j >= 25){
        continue;
        }
        for(int i = y - 3; i <= y + 3; i++){
            if(i < 0 || i >= 16){
                continue;
            }
            if((i == y) && (j == x)){
                cout << "@ ";
            }
            else if(map[j][i] == "w"){
                cout << "~ ";
            }
            else if(map[j][i] == "p"){
                cout << "* ";
            }
            else if(map[j][i] == "C"){
                cout << "C ";
            }
            else if(map[j][i] == "G"){
                cout << "G ";
            }
        }
        cout << endl;
    }
}

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
        case 1:
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
    file.open("pokemon.txt");
   
    while (getline(file, temp)){
        split(temp,c,array,9);
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
    cout << "It's an amazing day! You have " << person.getPokeball() << " pokeballs left." << endl;
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


int main(){
    Game run;
    run.firstMenu();
    run.land.displayMap(person.getyPosition(),person.getxPosition());
    run.mainMenu();
   //myGame.gameMenu();
    
    return 0;
}