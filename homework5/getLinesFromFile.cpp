//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 5 - Problem 1
#include <iostream>
#include <fstream>
using namespace std;

/**
 * Algorithim: that reads from a text file and stores its contents in an
array. 
 * 1. Opening the file and checking to see if its open
 * 2. Go through file one by one and store integers in array
 * 3. If line is empty or files not open, return -1
 * Input: Strings and two ints
 * Output: The amount of integers collected
 * Return: none
*/

int getLinesFromFile(string fileName, int array[], int length){
    ifstream myFile; //create an input file stream for writing to file 
    myFile.open(fileName); //opening fileName
    int i = 0; 
    if (myFile.is_open()){ //if files open
      string words;
        while(getline(myFile, words) && (i < length)){ //while loop reads through file one by one
                if(words == ""){ //if line is empty
                    return 0;
                }
                else{
                    array[i] = stoi(words); //store integer value of the line in array
                    
                    i++;
                }
           
        }
   
   }
   
   else{
       return -1;
   }
   myFile.close();
   return i;
}

int main(){
    int array[5];
    int length = 5;
    int j = getLinesFromFile("fileName.txt", array, 5);
    cout << "Function returned " << j << "\n";
}