//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 7 - Problem 5

#include "User.h"
#include <string>
using namespace std;
#include <cmath>
#include <iostream>
/**
 * Algorithim: Creates calcAverageRating function
   1. Implement lower function
   2. Create calcAverageRating 
   3. Loops to check each elemnt of users array to see if username match
   4. Main tests function
 * Input: Strings, char , int , array
 * Output: None
 * Return: Average
*/

string lower(string input){
    string length = "";
    int p = 0;
    while(p<input.size()){  //while less than size of string
        if(isupper(input[p])){
            length += char(input[p]+32);  //add char to length
            
        }
        else{
            length +=input[p]; //add input to length
        }
        p++;
    }
   return length;
}

double calcAverageRating(User users[], Book books[], int numberOfUsers, int numberOfBooks, string title){
    double t = 0.0;
    double c = 0.0;
    double b = -1.0;
    double z = 0.0;
    double user = 0.0;
    title = lower(title);
    int l = 0;
    while(l < numberOfBooks){
       string temporary = books[l].getTitle(); //sets temporary to position in array
       temporary = lower(temporary);
        if(temporary == title){ //if temporary is equal to input string
            b = l;
            break;
        }
      l++;
    }
   int d = 0;
   if(b != -1 && numberOfUsers > 0){
      while(d<numberOfUsers){
        if(users[d].getRatingAt(b)>0 && users[d].getRatingAt(b) <=5){ //if position is between 0-5
            t += users[d].getRatingAt(b); 
            user++;
        }
        
        
        d++;
      
    }
    if(user > 0){
            return c = t/user; //finds average
        }
        else{
            return 0;
        }
    
   
  }
 else{ //edge case
        return -3;
    }
}

int main(){
    //bookTitle does not exist
cout << calcAverageRating(users,books,5,4,"Harry Potter") <<endl;

//bookTitle exists, zero rating
cout << calcAverageRating(users,books,5,4,"Three Men in a Boat") <<endl;
}
   
