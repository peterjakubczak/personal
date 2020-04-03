//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 8 - Problem 4


/**
 * Algorithim: that writes a game!
   1. Check to see if there are the right amount of players on each team
   2. Add the points of each team
   3. Checks which team has more points, and makes them the winner
   4. If not enough players, forfeit, or if sums are equal then draw
 * Input: 2 vectors
 * Output: 
 * Return: Winner, or forfeit or draw
*/




using namespace std;
#include <iostream>
#include <vector>
#include <Team.h>

string game(Team team, Team team1)
{   
    string winner; //variable for the winner
    int i = 0;
    double sum = 0.0; //sum of points on first team
    double sum1 = 0.0; //sum of points on second team
    if(team.getNumPlayers() >= 4 && team1.getNumPlayers() >= 4) //if right amount of players
    {
      while (i < 4)
      {
          sum = sum + team.getPlayerPoints(i); //add sum of each team
          sum1 = sum1 + team1.getPlayerPoints(i);
          i++;
      }
      if(sum > sum1) //if first team has more points
      {
          
          winner = team.getTeamName();
      }
      else if (sum1 > sum) //if second team has more points
      {
          
          winner = team1.getTeamName();
      }
      
    }
    else 
    {
        return  "forfeit";  //not enough players
    }
    if(winner == team.getTeamName() || winner == team1.getTeamName())
    {
      return winner;
      
    }
    else if (sum == sum1)
    {
        return "draw"; //same amount of points, return draw
    }

   
}