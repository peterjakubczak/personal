//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 6 - Problem 4


/**
 * Algorithim: fill an array of Book objects instead of
having separate titles array and authors array
   1. Call split function
   2. Open file and read each line of file, check too see if file is open, also check if stored books is less than size
   3. Populate books
 * Input: Strings, array, ints
 * Output: None
 * Return: Books stored or -1
*/


#include <iostream>
#include <stirng>
#include "Book.H"
#include <fstream>

using namespace std;

int split(string str, char c, string array[], int length){
    if(str == ""){ //If string is empty
        return 0;
    }
    int i = 0;
    if(str[0] == c){ //if string at 0 is equal to char c
        i = 1;
    }
    int length1 = str.length();
    int numStrings = 0;
    int arrayCount = 0;
    string x = "";
    char f;
    str += c; 
    while(i < length1 + 1){ //loop until size of string line
        string position = str.substr(i,1);
        f = str[i]; //add characters to word
        if((f != c) || (str[i+1] == c)){
            x += position;
        }
        else{
            numStrings ++;
            array[arrayCount] = x;
            x = "";
            arrayCount++; 
        }
    
       i++;
       }
       
     return numStrings;
    }
  
 int readBooks(string fileName, Book books[], int numBookStored, int booksArrSize){
    ifstream myFile; //create an output file stream for writing to file
    myFile.open("books.txt"); //open books.txt
    if(numBookStored == booksArrSize){ 
        return -2;
    }
    if (myFile.is_open()){
        string arrayTemp[booksArrSize];
        string line = "";
        int lineidx = 0;
        while(getline(myFile, line)){
            if (numBookStored < booksArrSize){ //if number of books stored is less than size
                break; //break loop
            }
            else if (line!=""){ //if lines not empty
                split(line, ',', arrayTemp, booksArrSize);
                books[numBookStored].setAuthor(arrayTemp[0]); //fills Books with author
                books[numBookStored].setTitle(arrayTemp[0]); //fills Books wtih title
                 numBookStored++; //increase number of books stored
            }
          
        }
      return numBookStored;
    }
    else
    {
        return -1;
    }
}

int main(){
    cout << books[0].getAuthor()<< endl;
    cout << books[0].getTitle() << endl;
}