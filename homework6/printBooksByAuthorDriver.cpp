//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 6 - Problem 6


/**
 * Algorithim: print the list of books that are written by the given
author. 

   1.  Edge cases, if no books, print there are no books
   2. Checks authors name and counts books if total is less than 0
   3. Checks too see if their is titles by the author
 
 
 * Input: Arrays and int and string
 * Output: List of books by author
 * Return: None
*/

void printBooksByAuthor(Book books[], int numberOfbooks, string authorName){
    if(numberOfBooks <= 0){ //if no books
        cout << "No books are stored" << endl; 
        return;
    }
    int i = 0;
    int total = 0;
    while(i < numberOfBooks){
        if(books[i].getAuthor() == authorName){ //check author name with array of authors
            total++; //increments total amount of books
            
        }
        if(total<0){
            cout << books[i].getTitle() << endl;
            return;
        }
       
      i++;
    }
    if(total != 0){
            cout << "Here is a list of books by " << authorName << endl;
        }
  int j = 0;
  while(j < numberOfBooks){
  if( authorName == books[j].getAuthor()  ){ //checks authors name and prints titles
         cout << books[j].getTitle() << endl;
            j++;
        }
            
    }
        if(total == 0){ //if total of books is 0
            cout << "There are no books by " << authorName << endl;
  }
       
   
   
}