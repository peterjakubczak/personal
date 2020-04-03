//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Project 1 - Problem 5
#include <iostream>
#include <string>
using namespace std;

/**
 * Algorithim: that takes a genome and a sequence and returns the
highest similarity score found in the genome as a double.
 * 1. If statements that return 0 if sequence is smaller than subSequence, or empty strings
 * 2. Increments one character at a time
 * 3. For loop that compares sequence to subSequence
 * Input: Two String
 * Output: Nothing
 * Return: Best sim score
*/

double findBestSimScore(string sequence, string subSequence){

    if(sequence.size() < subSequence.size()){ //if sequence is smaller than subSequence then return 0
        return 0;
    }
    if(sequence == "" || subSequence == ""){ //if empty strings, return 0
        return 0;
    }
    double bestSimScore = 0.0;
    double simScore = 0.0;
    int x = 0;
    double sequenceLength = subSequence.length();
    for(int i = 0; i<= (sequence.length()-subSequence.length()); i++){ //increments one character at a time
         string part;
         part = sequence.substr(i, subSequence.length());
         x = 0;
         for(int q = 0; q<subSequence.length(); q++){ //finds matches
           if(part[q] != subSequence[q]){
               x++;
           }
       }
           simScore = (((double)subSequence.length())- (double)x)/(double)subSequence.length(); //calculates sim score
           if(simScore>bestSimScore){ //selects best sim score
           bestSimScore = simScore;
           }
           simScore = 0;
       
       
    }
   
    return bestSimScore;
    
}
int main(){
    cout << findBestSimScore("atacgc", "act"); //test case
    cout << findBestSimScore("sfdsdf", "sdfsefs");
}