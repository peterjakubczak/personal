//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Project 1 - Problem 1
#include <iostream>
#include <string>
using namespace std;

/**
 * Algorithim: that takes a string argument and prints all the characters in the string on a new line
 * 1. Void function that takes the string
 * 2. Define word length with a variable
 * 3. If statement that outputs the strings empty if the length is 0
 * 4. For loop that prints each individual letter
 * Input: String
 * Output: All the letters in a new line, or "Given string is empty!"
 * Return: None
*/

void printCharInString(string word){ //returns nothing so void, takes the word from user
    int n = word.length(); //establishes the length of the string
    if (word.length() == 0){ //if length of string is 0
        cout << "Given string is empty!" << endl; //output "Given string is empty!"
    }
    for(int i = 0; i < n; i++){ 
      cout << word[i] << endl; //prints out each individual letter
      
    }
}

int main(){
    printCharInString(""); //test case
    printCharInString("peterjakubczak");
}