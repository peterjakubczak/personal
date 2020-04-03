//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 3 - Problem 3

#include <iostream>
using namespace std;

/**
 * Algorithim: that determines if a square on a chess board is dark or light
 * 1. Void function that takes the users letter and number
 * 2. If statement that outputs the right color based on parameters
 * 3. Main tests function
 * Input: character and an integer
 * Output: white, black, or "“Chessboard squares can only have letters between a-h
and numbers between 1-8."
 * Return: None
*/

void chessBoard(char letter, int number){
    
    if ((letter == 'b' || letter == 'd' || letter == 'f' || letter == 'h') && (number == 2 || number == 4 || number == 6 || number == 8)){ //if these letters and numbers, output black
        cout<<"black"<< endl;
    }
    else if ((letter == 'a' || letter == 'c'|| letter == 'e' || letter == 'g') && (number == 1 || number == 3 || number == 5 || number == 7)){ //if these letters and numbers, output black
        cout<<"black"<< endl;
    }
    else if ((letter == 'b'|| letter == 'd' || letter == 'f' || letter == 'h') && (number == 1 || number == 3 || number == 5 || number == 7)){ //if these letters and numbers, output white
        cout<<"white"<< endl;
    }
    else if ((letter == 'a' || letter == 'c' || letter == 'e' || letter == 'g') && (number == 2 || number == 4 || number == 6 || number == 8)){ //if these letters and numbers, output white
        cout<<"white"<< endl;
    }
    else{
    
        cout<<"Chessboard squares can only have letters between a-h and numbers between 1-8."<< endl; //incase their letter and/or number don't match the criteria
    } 
    
}
int main(){
    chessBoard(c,4);
    chessBoard(i,12);
}
