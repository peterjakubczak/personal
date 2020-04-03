//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Paricha
//Homework 5 - Problem 4
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
 * Algorithim: that tells if there are books by their favorite author.
 * 1. Edge cases, if no books, print there are no books
 * 2. Checks authors name and counts books if total is less than 0
 * 3. Checks too see if their is titles by the author
 * Input: Two strings of arrays, int and a string
 * Output: List of books by author or no books
 * Return: none
*/
void printBooksByAuthor(string arrayTitles[], string arrayAuthors[], int books, string authorName){
    if(books <= 0){ //if no books
        cout << "No books are stored" << endl; 
        return;
    }
    int i = 0;
    int total = 0;
    while(i < books){
        if(arrayAuthors[i] == authorName){ //check author name with array of authors
            total++; //increments total amount of books
            
        }
        if(total<0){
            cout << arrayTitles[i] << endl;
            return;
        }
       
      i++;
    }
    if(total != 0){
            cout << "Here is a list of books by " << authorName << endl;
        }
  int j = 0;
  while(j < books){
  if( authorName == arrayAuthors[j]  ){ //checks authors name and prints titles
         cout << arrayTitles[j] << endl;
            j++;
        }
            
    }
        if(total == 0){ //if total of books is 0
            cout << "There are no books by " << authorName << endl;
  }
       
   
   
}
int main(){
   string titles[5] = {};
   string authors[5] = {};
   string Rowling;
   printBooksByAuthor(titles, authors, 4, Rowling);
}