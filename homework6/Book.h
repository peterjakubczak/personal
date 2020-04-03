//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 6 - Problem 3


/**
 * Algorithim: Creates book class
  * 1. Set up public member functions
 * 2. Set up private member functions
 * Input: Strings
 * Output: None
 * Return: None
*/



#include <string>
using namespace std;
#ifndef BOOK_H
#define BOOK_H

class Book{
     private:
    string title1;
    string author1;
    
    public: 
    Book();
    Book(string title, string author);
    string getTitle();
    void setTitle(string title);
    string getAuthor();
    void setAuthor(string author);
    
  
};

#endif
