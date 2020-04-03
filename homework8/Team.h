//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 8 - Problem 3


/**
 * Algorithim: that creates the team class

   1. Creative private variables in class
   2.Create public functions
   
 * Input: String, double
 * Output: 
 * Return: 
*/

#include <string>
#include <vector>
using namespace std;
#ifndef TEAM_H
#define TEAM_H

class Team
{
      private: //private variables
     string teamName;
     vector<Player> players;
    
    public: //sets up functions
    Team();
    Team(string);
    void setTeamName(string);
    void readRoster(string);
    string getPlayerName(int);
    double getPlayerPoints(int);
    int getNumPlayers();
    string getTeamName();
    
    
  
};

#endif