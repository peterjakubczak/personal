//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 8 - Problem 3


/**
 * Algorithim: that creates the functions in class team

   1. Initalize each function in class
   
 * Input: Strings, doubles
 * Output: Nothing
 * Return: Strings, doubles
*/

#include "Team.h"
#include <string>
#include <fstream>
using namespace std;
#include <cmath>
#include <iostream>

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
  
Team :: Team()
{
    teamName = ""; //enpty string for team name
  
}

Team :: Team(string teamName1) 
{
   teamName = teamName1; 
   
}

void Team :: setTeamName(string teamName1)
{
    teamName = teamName1;
}

string Team :: getPlayerName(int i)
{
    if(i >= 0 && i < players.size())
    {
        return players[i].getName(); //each players name
        
    }
    else
    {
        return "ERROR";
    }
}

double Team :: getPlayerPoints(int i)
{
    if(i >=0 && i < players.size())
    {
        return players[i].getPoints(); //return each players points
    }
    else
    {
         return -1;
    }
}

int Team :: getNumPlayers()
{
    return players.size();
}

string Team :: getTeamName()
{
    return teamName;
}

void Team :: readRoster(string fileName)
{
    ifstream myFile; //create an output file stream for writing to file
    myFile.open(fileName);
    int numPlayers = 0;
    string arrayTemp[2];
    string line = "";
    if (myFile.is_open()){ //makes sure files open
         while(getline(myFile, line))
         {
             
             
                split(line, ',', arrayTemp, 2);
                Player a(arrayTemp[0], stod(arrayTemp[1])); //player object
                players.push_back(a); //fills vector
            
        }
    }
}   

