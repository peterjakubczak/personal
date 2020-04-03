//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Paricha
//Homework 5 - Problem 5
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
 * Algorithim: that prints out a “map” of which points in the array are below or
above the water level
 * 1. Void function that prints out * or _
 * 2. First for loop cycles through rows, second for loop cycles through elements 
 * 3. If number is greater than water level, print *, else _
 * Input: Array, int, and double
 * Output: Map of water level
 * Return: none
*/

void floodMap(double arr[][4], int rows, double water){
    for(int i = 0; i < rows; i++){ //go through each row
        for(int j = 0; j < 4; j++){ //go through each element of row
            if(arr[i][j] <= water){
                cout << "*";
            }
            else{
                cout << "_";
            }
        }
        cout << endl;
    }
}

int main(){
    int rows1 = 4;
    double arr1[4][4]={{2.0,5.0,8.0,9.0},{5.0,8.0,3.0,9.0},{1.0,5.0,4.0,2.0},{8.0,6.0,8.0,9.0}};
    double water1 = 5;
    floodMap(arr1, rows1, water1);
}