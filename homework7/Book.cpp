//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 6 - Problem 3


/**
 * Algorithim: Creates book function
   1. Creates each individualfunction for book class
 * Input: Strings
 * Output: None
 * Return: None
*/



#include "Planet.h"
#include <string>
using namespace std;
#include <cmath>
#include <iostream>

Book :: Book(){
    string title1 = ""; //empty title
    string author1 = ""; //empty author
}
Book :: Book(string title, string author){
    title1 = title; //sets input to class variables
    author1 = author; //sets input to class variables
}
void Book :: setTitle(string title){
    title1 = title;
}
void Book :: setAuthor(string author){
    author1 = author;
}
string Book :: getTitle(){
    return title1; //gets title
}

string Book :: getAuthor(){
    return author1;
}
