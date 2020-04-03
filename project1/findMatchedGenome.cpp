//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Project 1 - Problem 6
#include <iostream>
#include <string>
using namespace std;

/**
 * Algorithim: that takes three genomes and a sequence and prints
the list of matched genomes.
 * 1. All of findBestSimScore entered
 * 2. Comparing bestScimscores to see which one is more related
 * 3. Main tests cases
 * Input: Four strings
 * Output: Outputting genome
 * Return: None
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

void findMatchedGenome(string genome1, string genome2, string genome3, string sequence){
    double genome1bestSimScore= findBestSimScore(genome1, sequence);
    double genome2bestSimScore= findBestSimScore(genome2, sequence);
    double genome3bestSimScore= findBestSimScore(genome3, sequence);
    
    if(genome1.length() == 0 || genome2.length() == 0 || genome3.length()== 0 || sequence.length()== 0){ //if any length is 0, output its empty
        cout << "Genomes or sequence is empty." << endl; 
    }
    else if(genome1.length() != genome2.length() || genome2.length() != genome3.length() || genome3.length() != genome1.length()){ //if lengths arent equal, output lengths are different
        cout << "Lengths of genomes are different." << endl;
    }
    else{
        
        if(genome1bestSimScore >= genome2bestSimScore && genome1bestSimScore >= genome3bestSimScore){ //similairity score of genome 1 is tbe greatest
            cout << "Genome 1 is the best match." << endl;
        }
         if(genome2bestSimScore >= genome1bestSimScore && genome2bestSimScore >= genome3bestSimScore){ //similairity score of genome 2 is tbe greatest
            cout << "Genome 2 is the best match." << endl;
        }
         if(genome3bestSimScore >= genome1bestSimScore && genome3bestSimScore >= genome2bestSimScore){ //similairity score of genome 3 is tbe greatest
            cout << "Genome 3 is the best match." << endl;
         }
    }
}
int main(){
    findMatchedGenome("dfsdf", "dfsfsedf", "dfsdf", "dfsdf"); //test case
    findMatchedGenome("dedfsdfdf", "dfsfdfsdff", "dfsdsdfdff", "dfssdfsdfdf");
}