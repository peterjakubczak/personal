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
  
  int readBooks(string fileName, string arrayTitles[], string arrayAuthors[], int numBookStored, int size){
    ifstream myFile(fileName); //create an output file stream for writing to file
     //open books.txt
    if(numBookStored == size){ 
        return -2;
    }
    if (myFile.is_open()){
        string arrayTemp[size];
        string line = "";
        int lineidx = 0;
        while(getline(myFile, line)){
            if (numBookStored < size){ //if number of books stored is less than size
                break; //break loop
            }
            else if (line!=""){ //if lines not empty
                split(line, ',', arrayTemp, size);
                arrayAuthors[numBookStored] = arrayTemp[0]; //fills authors array
                arrayTitles[numBookStored] = arrayTemp[1]; //fills titles array
                 numBookStored++;
                 cout << numBookStored << endl;//increase number of books stored
            }
          
        }
      
    }
    else
    {
        return -1;
    }
    return numBookStored;
}

int main(){
    int readBooks(fileName,arrayTitles[],arrayAuthors[], 0 , 50);
    
}