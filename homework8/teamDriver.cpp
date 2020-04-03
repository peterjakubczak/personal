//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 8 - Problem 3


/**
 * Algorithim: that is the driver for team.

   1. Main function

 * Input: Two int vectors
 * Output: Name, points
 * Return:
*/

#include <iostream>
#include "Player.cpp"
#include "Team.cpp"
using namespace std;
int main() //test Team class!
{

 Team team1("Seg Faultline");
 cout << team1.getTeamName() << endl;
 team1.readRoster("roster.txt");
 int n1 = team1.getNumPlayers();
 cout << n1 << endl;
 for (int i = 0; i < n1; i++)
 {
     cout << team1.getPlayerName(i) << " ";
     cout << team1.getPlayerPoints(i) << endl;
 }
 
 Team team3("Oh no!");
 cout << team3.getTeamName() << endl;
 team3.readRoster("roster.txt");
 int n3 = team3.getNumPlayers();
 cout << n3 << endl;
 cout << team3.getPlayerName(-1) << " ";
 cout << team3.getPlayerPoints(-1) << endl;
 cout << team3.getPlayerName(4) << " ";
 
}
