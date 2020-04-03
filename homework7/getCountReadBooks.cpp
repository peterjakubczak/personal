//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 7 - Problem 4


/**
 * Algorithim: Creates getCountReadBooks function
   1. Implement lower function
   2. Create getCountReadBooks
   3. Loops to check each element of users array to see if username match
   4. Main tests function
 * Input: Strings, char , int , array
 * Output: None
 * Return: count
*/



#include "User.h"
#include <string>
using namespace std; 
#include <cmath>
#include <iostream>


string lower(string input){
    string length = "";
    int p = 0;
    while(p<input.size()){ //while less than size of string
        if(isupper(input[p])){
            length += char(input[p]+32); //add char to length
            
        }
        else{
            length +=input[p]; //add input to length
        }
        p++;
    }
   return length;
}

int getCountReadBooks(string username, User users[], int numberOfUsers, int numberOfBooks){
    username = lower(username);
    int count = 0;
    int user = 0;
    int q = 0;
    while(q < numberOfUsers){
        string y = users[q].getUsername(); //sets user is username matches
        y = lower(y);
        if(username == y){
            user = q;
            break;
        }
      q++;
    }
    
    if(user == -1 || numberOfBooks <= 0){
        return -3;
    }
    else{
        int e = 0;
        while(e < numberOfBooks){
            if(users[user].getRatingAt(e) > 0 && users[user].getRatingAt(e) <= 5){ //if position is between 0 and 5, increment count
                count++;
            }
          e++;
        }
      return count;
    }
}

int main(){
    //User name doesn't exists, non zero rating
cout << getCountReadBooks("Punith",users,5,4) <<endl;

//User name exists, zero rating
cout << getCountReadBooks("BOnNie",users,5,4) <<endl;
}
