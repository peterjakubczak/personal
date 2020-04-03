//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 7 - Problem 3


/**
 * Algorithim: Creates getRatings function
   1. Create lower function 
   2. Create getRatings function
   4. Main tests function
 * Input: Strings, char , int , array
 * Output: None
 * Return: Based on function
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



int getRating( string username, string title, User users[], Book books[], int numberOfUsers, int numberOfBooks){
    int book = -1;
    int user = -1;
    int m = 0;
    username = lower(username); //lowercase username
    
    while(m < numberOfUsers){
            string x = users[m].getUsername(); //set string to postition in user
             x = lower(x);
        if(username == x){ //if input username is equal to position
            user = m; 
            break;
           
        }
        m++;
    }
    
    title = lower(title); //lowercase title
    int t = 0;
    while(t < numberOfBooks){
        string u = books[t].getTitle(); //set string to position in title
        u = lower(u);
        if(title == u){ //if input title is equal to position
            book = t;
            break;
        }
        t++;
    }
    if((user != -1) && (book != -1)){
        return users[user].getRatingAt(book);
    }
    else{ //edge case
        return -3;
    }
    
    
}

int main(){
    //userName does not exist
cout<<getRating("Hugh", "Three Men In A Boat", users, books, 5, 4)<<endl;

//0 userNames in array
cout<<getRating("Tom", "The Fountainhead", users, books, 0, 4)<<endl;
}
