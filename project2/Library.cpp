//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Project 2 - Problem 0


/**
 * Algorithim: Creates Library function
   1. Creates each individual function for Library class
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
        if(f != c){ //|| (str[i+1] == c)){
            x += position;
        }
        else if(x != "" ){
            numStrings ++;
            array[arrayCount] = x;
            x = "";
            arrayCount++; 
        }
    
       i++;
       }
       
     return numStrings;
    }
  
Library :: Library(){
     numBooks = 0;
     numUsers = 0;
     sizeBook = 50;
     sizeUser = 100;
     
 }
 int Library :: getSizeBook(){
     return sizeBook; //return size book
 }
 int Library :: getSizeUser(){
     return sizeUser; //return size user
 }
 int Library :: getNumBooks(){
     return numBooks; //return number of books
     
 }
 int Library :: getNumUsers(){
     return numUsers; //return number of users
 }

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
        if(f != c){ //|| (str[i+1] == c)){
            x += position;
        }
        else if(x != "" ){
            numStrings ++;
            array[arrayCount] = x;
            x = "";
            arrayCount++; 
        }
    
       i++;
       }
       
     return numStrings;
    }
  
  
 int Library :: readBooks(string fileName){                                     
    ifstream myFile(fileName); //create an output file stream for writing to file
     //open books.txt
    if(numBooks == sizeBook){ 
        return -2;
    }
    if (myFile.is_open()){
        string arrayTemp[sizeBook];
        string line = "";
        int lineidx = 0;
        while(getline(myFile, line)){
            if (numBooks >= sizeBook){ //if number of books stored is less than size
                break; //break loop
            }
            else if (line!=""){ //if lines not empty
                split(line, ',', arrayTemp, sizeBook);
                books[numBooks].setAuthor(arrayTemp[0]); //fills Books with author
                books[numBooks].setTitle(arrayTemp[1]); //fills Books wtih title
                 numBooks++; //increase number of books stored
            }
          
        }
      
    }
    else
    {
        return -1;
    }
  return numBooks;
}

void Library :: printAllBooks(){
    if(numBooks<=0){ //if no books
        cout << "No books are stored" << endl;
    }
    else{
        cout << "Here is a list of books" << endl;
        for(int i = 0; i < numBooks; i++){
            
            cout << books[i].getTitle() << " by " << books[i].getAuthor() << endl; //print title and author for class Books
        }
        
        
    }
}

void Library :: printBooksByAuthor(string authorName){                          //FIX THIS SHOW TA
    if(numBooks <= 0){ //if no books
        cout << "No books are stored" << endl; 
        return;
    }
    int i = 0;
    int total = 0;
    while(i < numBooks){
        if(books[i].getAuthor() == authorName){ //check author name with array of authors
            total++; //increments total amount of books
            
        }
    
      i++;
    }
    if(total != 0){
            cout << "Here is a list of books by " << authorName << endl;
        }
  int j = 0;
  while(j < numBooks){
  if( authorName == books[j].getAuthor()  ){ //checks authors name and prints titles
         cout << books[j].getTitle() << endl;
           
        }
        j++;     
    }
        if(total == 0){ //if total of books is 0
            cout << "There are no books by " << authorName << endl;
  }
       
   
   
}

int Library :: readRatings(string fileName){
    ifstream myFile;
    myFile.open(fileName);
    if(numUsers == sizeUser){ //if number of users equals maximum number of rows, return -2
        return -2;
    }
    if (myFile.is_open()){
        string line;
        int i = 0;
        string array[51];
        while(getline(myFile, line) && (numUsers < sizeUser)){
            if(line != ""){ //if lines not empty
                split(line, ',', array, 51 ); //gets elements
                users[numUsers].setUsername(array[0]);
                int k = 1;
                for(k; k < sizeBook+1; k++){ //goes through each column
                    if(array[k] == ""){
                       break;
                       
                    }
                    else{
                        users[numUsers].setRatingAt(k-1, stoi(array[k])); //fills the array with elements
                    }
                }
              numUsers++;
            }
        }
      
    }
    else{
        return -1;
    }
  return numUsers;
}


string lower(string input){
    string length = "";
    int p = 0;
    while(p<input.size()){ //while less than size of string
        if(isupper(input[p])){
            length += char(input[p]+32); //add char to length
            
        }
        else{
            length +=input[p]; //add input to length
        }
        p++;
    }
   return length;
}



int Library :: getRating(string username, string title){
    int book = -1;
    int user = -1;
    int m = 0;
    username = lower(username); //lowercase username
    
    while(m < numUsers){
            string x = users[m].getUsername(); //set string to postition in user
             x = lower(x);
        if(username == x){ //if input username is equal to position
            user = m; 
            break;
           
        }
        m++;
    }
    
    title = lower(title); //lowercase title
    int t = 0;
    while(t < numBooks){
        string u = books[t].getTitle(); //set string to position in title
        u = lower(u);
        if(title == u){ //if input title is equal to position
            book = t;
            break;
        }
        t++;
    }
    if((user != -1) && (book != -1)){
        return users[user].getRatingAt(book);
    }
    else{ //edge case
        return -3;
    }
    
    
}

int Library :: getCountReadBooks(string username){
    username = lower(username);
    int count = 0;
    int user = 0;
    int q = 0;
    while(q < numUsers){
        string y = users[q].getUsername(); //sets user is username matches
        y = lower(y);
        if(username == y){
            user = q;
            break;
        }
      q++;
    }
    
    if(user == -1 || numBooks <= 0){ //invalid
        return -3;
    }
    else{
        int e = 0;
        while(e < numBooks){
            if(users[user].getRatingAt(e) > 0 && users[user].getRatingAt(e) <= 5){ //if position is between 0 and 5, increment count
                count++;
            }
          e++;
        }
      return count;
    }
}

void Library :: viewRatings(string username, int value){ //finds the ratings for a user
    //prints books and rating above minimum rating value
        int m = 0;
    int index = -1;
    int i = 0;
    bool dog = false;
    while(i < numUsers){
        if(lower(username) == (lower(users[i].getUsername()))){
            index = i;
        }
       i++;
    }
    if(index<0){
        cout << username << " does not exist. " << endl;
    }
    else{
        
   
    for(int j = 0; j < numBooks; j++){
       
        if(users[index].getRatingAt(j) >= value){
             while(m<1){
            cout << "Here are the books that " << username << " rated " << endl;
            m++;
        }
            cout << "Title : " << books[j].getTitle() << endl;
            cout << "Rating : " << users[index].getRatingAt(j) << endl; //prints books and rating above minimum rating value
            cout << "-----" << endl;
            dog = true;
        
         }
         
        
     }
     
        if(dog == false){
            cout << username << " has not rated any books yet." << endl;
            
        }
    }   
  }
}        


double Library :: calcAvgRating(string title){
    double t = 0.0;
    double c = 0.0;
    double b = -1.0;
    double z = 0.0;
    double user = 0.0;
    title = lower(title);
    int l = 0;
    while(l < numBooks){
       string temporary = books[l].getTitle(); //sets temporary to position in array
       temporary = lower(temporary);
        if(temporary == title){ //if temporary is equal to input string
            b = l;
            break;
        }
      l++;
    }
   int d = 0;
   if(b != -1 && numUsers > 0){
      while(d<numUsers){
        if(users[d].getRatingAt(b)>0 && users[d].getRatingAt(b) <=5){ //if position is between 0-5
            t += users[d].getRatingAt(b); 
            user++;
        }
        
        
        d++;
      
    }
    if(user > 0){
            return c = t/user; //finds average
        }
        else{
            return 0;
        }
    
   
  }
 else{ //edge case
        return -3;
    }
}

double Library :: calcAvgRatingByAuthor(string name){
 bool aIndex = 0;
    double sum = 0.0;
    double average = 0.0;
    int c = 0;
    int i = 0;
    int j = 0;
    while (i < numBooks){
         if (lower(books[i].getAuthor()) == lower(name)){ //finds index
            aIndex = 1;
            while (j < numUsers){
           
                if(users[j].getRatingAt(i) > 0){
                    sum = sum + users[j].getRatingAt(i); //sum of ratings
                    c++;
                }
                j++;
            }
            
        }
        i++;
    }
    if(aIndex==0){
        return -3;
    }
    if(numUsers == 0){
        return -3;
    }
    if(c == 0){
        return 0;
    }
    average = sum /(double)c;
    return average; //average of ratings
}

int Library :: addUser(string username){
    int p = 0;
    int ratings[50];
    int array = 50;
    int i = 0;
    int j = 0;
    int k = 0;
    if (numUsers == sizeUser){
        return -2;
    }
    while(i<sizeUser){
        if(lower(username) == lower(users[i].getUsername())){//checks if user exists
            return 0;
        }
      
       i++;  
    }
    users[numUsers].setUsername(username);
    
  
    while(k < sizeUser){
        users[numUsers].setRatingAt(k,0);//fills the new users ratings to 0
        k++;
        
    }
    numUsers++;
    return 1;
}

int Library :: checkOutBook(string username, string title, int newRating ){
    int i = 0;
    int j = 0;
    int uIndex = -1;
    int bIndex = -1;
    username = lower(username);
    title = lower(title);
    while (i < sizeUser){
    if(lower(users[i].getUsername()) == username) {
        uIndex = i; //finds user index
     }
     i++;
   }
    
      while(j < sizeBook){
            if(lower(books[j].getTitle()) == title){
               bIndex = j; //finds book index
            } 
            j++;
      }
          
    int r = users[uIndex].getRatingAt(bIndex +1);
    if(((newRating <= 5) && (newRating>= 0)) && ((uIndex != -1) && (bIndex != -1))){
        users[uIndex].setRatingAt(bIndex, newRating); //sets rating to new rating
        return 1;
    }
           
    if((r < 0) || (r>5)){ //invalid
        return -4;
    }
    if(((uIndex < 0) || (bIndex < 0)) && ((newRating<= 5) && (newRating >= 0))){
        return -3;
    }
         
    

}

void Library :: getRecommendations(string username){
    int index = -5;
    int simScore = 0;
    int minimum = 10000;
    int newUserC = 0;
    int userIndex = 0;
    int counter = 0;
    int w = 0;
    int c = 0;
    int i = 0;
    int j = 0;
    int z = 0;
    int q = 0;
    int t = 0;
    while(i < numUsers){
        if(lower(users[i].getUsername()) == (username)){
            index = i;
            break;
        }
        
      i++;
    }
    if(index < 0){
        cout << username << " does not exist." << endl;
    }
    else{
        while(j<numUsers){
            if(lower(username) != lower(users[j].getUsername())){
                while(z<numBooks){
                    simScore = simScore + pow((users[index].getRatingAt(z)-users[j].getRatingAt(z)), 2); //gets sim score
                    z++;
                    w+=users[j].getRatingAt(z);
                }
                if((simScore < minimum) && (w != 0)){
                    userIndex = j;
                    minimum = simScore; //sets minimum to sim score
                }
            }
            j++;
        }
        while(q<numBooks){
            if((users[index].getRatingAt(q) == 0) && (users[userIndex].getRatingAt(q)>2)){
                counter++;
            }
            q++;
        }
        if(counter == 0){
            cout << "There are no recommendations for " << username << " at present." << endl;
        }
        else{
            cout << "Here is the list of recommendations" << endl;
            while(t<numBooks){
                if(c == 5){
                    break;
                }
                if((users[index].getRatingAt(t) == 0) && (users[userIndex].getRatingAt(t)>2)){
                    cout << books[t].getTitle() << " by " << books[t].getAuthor() << endl;
                    c++;
                }
              t++;
            }
        }
        
    }
    
   
}