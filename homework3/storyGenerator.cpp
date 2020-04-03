//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 3 - Problem #11

#include <iostream>
using namespace std;
#include <string>

/**
 * Algorithim: that plays the mad libs game
 * 1. Goes through if statements
 * 2. Outputs the correct statement
 * 3. If 4, then says Good bye!
 * Input: Int
 * Output: Statements!
 * Return: None
*/



int main()
{
    int choice; 
    while(choice !=4) //while choice is not 4
    {
         cout<<"Which story would you like to play? Enter the number of the story (1, 2, or 3) or type 4 to quit"<< endl;
         cin >> choice; //user inputs choice
         
     if(choice == 1) //if the choice is 1
         {
             string noun;
             cout<< "Enter a noun:"<< endl; //prompts user to enter noun
             cin >> noun;
             cout<< "Be careful not to vacuum the " +  noun  + " when you clean under your bed."<< endl;
             cout << endl;
         }
         else if(choice == 2) //if the choice is 2
         {
             string name, occupation, place;
             cout<< "Enter a name: " << endl;
             cin >> name;
             cout<< "Enter an occupation: " << endl;
             cin >> occupation;
             cout<< "Enter a place: " << endl;
             cin >> place;
             cout<< name +  " is a " +  occupation  + " who lives in " +  place + "." << endl;
             cout << endl;
        }
        else if(choice == 3) //if the choice is 3
        {
            string noun, occupation, animal, place; //declares all these new strings
            cout<< "Enter a plural noun: "<< endl;
            cin >> noun;
            cout<< "Enter an occupation: "<< endl;
            cin >> occupation;
            cout<< "Enter an animal: "<< endl;
            cin >> animal;
            cout<< "Enter a place: "<< endl;
            cin >> place;
            cout<< "In the book War of the " +  noun  + ", the main character is an anonymous " +  occupation  + " who records the arrival of the " +  animal  + "s in " +  place + "."  << endl;
            cout<< endl;
        }
    
    }
    cout << "Good bye!" << endl;
}