//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 7 - Problem 2


/**
 * Algorithim: Creates read ratings
   1. Implement split function
   2. Alter read rating
   4. Main tests function
 * Input: Strings, char , int , array
 * Output: None
 * Return: Number of users stored
*/
#include "User.h"
#include <string>
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
        if((f != c) || (str[i+1] == c)){
            x += position;
        }
        else{
            numStrings ++;
            array[arrayCount] = x;
            x = "";
            arrayCount++; 
        }
    
       i++;
       }
       
     return numStrings;
    }
  
 int readRatings(string fileName, User users[], int numUsersStored, int usersArrSize, int maxCol){
    ifstream myFile;
    myFile.open(fileName);
    if(numUsersStored == usersArrSize){ //if number of users equals maximum number of rows, return -2
        return -2;
    }
    if (myFile.is_open()){
        string line;
        int i = 0;
        string array[51];
        while(getline(myFile, line) && (numUsersStored < usersArrSize)){
            if(line != ""){ //if lines not empty
                split(line, ',', array, 51 ); //gets elements
                users[numUsersStored].setUsername(array[0]);
                int k = 1;
                for(k; k < maxCol+1; k++){ //goes through each column
                    if(array[k] == ""){
                       break;
                       
                    }
                    else{
                        users[numUsersStored].setRatingAt(k-1, stoi(array[k])); //fills the array with elements
                    }
                }
              numUsersStored++;
            }
        }
      
    }
    else{
        return -1;
    }
  return numUsersStored;
}



int main(){
    // check the users arr

User users[10];

int numUsers = 0;
int maxRows = 10;
int maxColumns = 50;

numUsers = readRatings("ratings_sample1.txt", users, numUsers, maxRows, maxColumns);

cout << "Function returned value: " << numUsers << endl;

// checking the elements in the arr
if(numUsers == 4)
{
    printUsers(users, numUsers);
}
else
{
     cout << "make sure your user count is correct" << endl;
}


// check the ratings
User users[10] = {};

int numUsers = 0;
int maxRows = 10;
int maxColumns = 50;
int numBooks = 5; // (we know it's 5 books)
numUsers = readRatings("ratings_sample1.txt", users, numUsers, maxRows, maxColumns);

cout << "Function returned value: " << numUsers << endl;
// checking the elements in the arr
if(numUsers == 4){
     printRatings(users, numUsers, numBooks);
}else {
     cout << "make sure your user count is correct" << endl;
}
}