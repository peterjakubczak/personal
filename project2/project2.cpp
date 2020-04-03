//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Project 2 - Problem 0


/**
 * Algorithim: Creates driver function
   1. Creates each menu option
 * Input: Strings, ints, array
 * Output: None
 * Return: Depends per function
*/

#include "User.h"
#include "Book.h"
#include "Library.h"
#include <fstream>
#include <string>
using namespace std;
#include <cmath>
#include <iostream>




void displayMenu(){
    cout << "Select a numerical option:" << endl;
    cout << "======Main Menu=====" << endl;
    cout << "1. Read books" << endl;
    cout << "2. Read ratings" << endl;
    cout << "3. Print all books" << endl;
    cout << "4. Print books by author" << endl;
    cout << "5. Get rating" << endl;
    cout << "6. Find number of books user rated" << endl;
    cout << "7. View ratings" << endl;
    cout << "8. Get average rating" << endl;
    cout << "9. Get average rating by author" << endl;
    cout << "10. Add a user" << endl;
    cout << "11. Checkout a book" << endl;
    cout << "12. Get recommendations" << endl;
    cout << "13. Quit" << endl;
}