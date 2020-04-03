//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Paricha
//Homework 5 - Problem 3
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
 * Algorithim: that displays the contents of your library
 * 1. If books are less than or equal to 0, print no books are stored
 * 2. Go through each book and print authors name
 * 3. Main tests function
 * Input: Two strings and int
 * Output: Outputting no books or the title and author
 * Return: none
*/

void printAllBooks(string arrayTitles[], string arrayAuthors[], int books){
    if(books<=0){ //if no books
        cout << "No books are stored" << endl;
    }
    else{
        cout << "Here is a list of books" << endl;
        for(int i = 0; i < books; i++){
            
            cout << arrayTitles[i] << " by " << arrayAuthors[i] << endl; //print title and author
        }
        
        
    }
}

int main(){
    string authors[10] = {};
    string titles[10] = {};
    printAllBooks(titles, authors, 3);
}