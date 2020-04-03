//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Project 2- Problem 0


/**
 * Algorithim: Creates library class
  * 1. Set up public member functions
 * 2. Set up private member functions
 * Input: Strings
 * Output: None
 * Return: None
*/


#include "Book.h"
#include "User.h"
#include <string>
using namespace std;
#ifndef LIBRARY_H
#define LIBRARY_H

class Library{ //private variables
    private:
    const int sizeBook = 50;
    const int sizeUser = 100;
    Book books[50];
    User users[100];
    int numBooks;
    int numUsers;
    
    public: //public variables
    Library();
    int getSizeBook(); 
    int getSizeUser();
    int getNumBooks();
    int getNumUsers();
    int readBooks(string);
    void printAllBooks();
    void printBooksByAuthor(string);
    int readRatings(string);
    int getRating(string,string);
    int getCountReadBooks(string);
    void viewRatings(string,int);
    double calcAvgRating(string);
    double calcAvgRatingByAuthor(string);
    int addUser(string);
    int checkOutBook(string,string,int);
    void getRecommendations(string);
};
#endif