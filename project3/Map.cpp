//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Project 3


/**
 * Algorithim: Creates map class
  * 1. Set up public member functions
 * 2. Set up private member functions
 * Input: Strings, int, array 
 * Output: None
 * Return: None
*/

#include "Map.h"

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