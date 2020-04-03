//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Project 1 - Problem 2
#include <iostream>
#include <string>
using namespace std;

/**
 * Algorithim: that searches the substring in the given string and returns how many times the substring appears in the string.
 * 1. Set up an if statement for an instance where theres no word or substring
 * 2. For loop that takes the word, and finds how many substrings there are, and increments the matches
 * 3. Main tests function
 * Input: Two String
 * Output: Nothing
 * Return: Matches
*/

int countMatches(string search, string substring){
    if (search == "" || substring == "") //if no word or substring entered
    {
        return -1; //return -1
    }
    int matches = 0; //sets matches to 0
    for(int i = 0; i < search.length(); i++)
    {
        string test = search.substr(i, substring.length()); //looks for the substring
        if(test == substring){
            matches++; //increments the matches if test equals the substring
        }
    }
 return matches;
}

int main(){
    
   
    int display = countMatches("asasasdfdfgas", "as"); //main tests function
    cout<< display << endl; 
    int display2 = countMatches("asdfasdfjsdf", "fa");
    cout<< display2 << endl;
    return 0;
}