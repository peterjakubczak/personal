//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Project 1 - Problem 4
#include <iostream>
#include <string>
using namespace std;

/**
 * Algorithim: that returns the similarity score for two sequences
 * 1. Function that takes user string inputs
 * 2. If the strings are empty or not equal, return 0
 * 3. While loop that returns the similairity by going through each letter
 * 4. Main tests function
 * Input: Two strings
 * Output: Nothing
 * Return: Similairity score
*/

double calcSimScore(string sequence1, string sequence2){
    int length1=sequence1.length(); //gets length of 1
    int length2=sequence2.length(); //gets length of 2
    
    
    double character;
    double result = 0.0;
    if(sequence1 == "" || sequence2 == ""){ //if the strings are empty
        return 0;
    }
    else if(length1 != length2){ //if the lengths dont equal each other
        return 0;
    }
    else{
        int l;
        l = 0;
        character = 0.0;
        while(l < length1){ //goes through each letter
            if (sequence1[l]==sequence2[l]){ //if equal letters
                character++; 
            }
          l++;
        }
     double n = length1;
     result = (double)character/n; //gets your result after the while loop
     return result;
    }
}

int main(){
    cout << calcSimScore("AG", "AG") << endl; //main tests function
    cout << calcSimScore("fjsdikf", "jdshfoizdsj") << endl;
    
 
}