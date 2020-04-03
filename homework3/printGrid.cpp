//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 3 - Problem 10

#include <iostream>
using namespace std;

/**
 * Algorithim: that takes a single integer representing the number of rows and columns, and prints a grid. 
 * 1. Takes the size of the grid
 * 2. Loops that print out the proper rows and columns
 * 3. Main tests cases
 * Input: integer representing the size of the grid
 * Output: a grid with rows and columns, or "the grid can only have positive number of rows and columns."
 * Return: None
*/

void printGrid(int size)
{
    if(size<=0) //makes user input a positive
        {
            cout << "The grid can only have a positive number of rows and columns." << endl;
        }
    else
    {
        
        for(int i = 1; i <= size; i++)
        {
            int columns;
            columns = 0;
        while(columns < size)
        {
            cout<< "+--"; //prints out for columns
            columns = columns + 1; 
        }
         cout<< "+"<< endl;
        
       int rows;
       rows = 0;
       while(rows < size)
       {
           cout<< "|  "; //prints out for rows
           rows = rows +1;
       }
        cout<<"|"<< endl;
    }
    int columns;
            columns = 0;
        while(columns < size) //to create the final line
        {
            cout<< "+--";
            columns = columns + 1;
        }
         cout<< "+"<< endl;
        
   } 
}
int main(){
    printGrid(7);
    printGrid(12);
}