//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 8 - Problem 1


/**
 * Algorithim: that takes an input parameter arguments two vectors of integer
values and returns a vector of integer values that combines the two input vectors by
alternating between values from each of the two vectors.

   1. If either vector has a size zero, return an empty vector
   2.If vector b is bigger, start with the virst value in b, and a takes the second value
   3.If vector a is bigger or the same size as b, print the first value of a, then b, and so on
 * Input: Two int vectors
 * Output: Nothing
 * Return: new shuffled vector
*/




using namespace std;
#include <iostream>
#include <vector>

vector<int> shuffle(vector<int> a, vector<int> b)
{
    vector<int> c; // new shuffled empty vector
    if((a.size() == 0) && (b.size() == 0)){ //if either vector has no values
        return c; //returns empty vector
    }
    if(b.size() > a.size()) //if vector b is greater than a
    {
        for(int i = 0; i < b.size(); i++) 
        {
            c.push_back(b[i]); //print first value of b
            if(i<a.size()) 
            {
                c.push_back(a[i]); //prints a until theres no more
            }
            
           
         
        }
    
    }
    if((a.size() > b.size()) || (a.size() == b.size())) //if vector a is greater or equal to vector b
    {
        for(int j = 0; j < a.size(); j++)
        {
            c.push_back(a[j]); //print a first
            if(j<b.size())
            {
                c.push_back(b[j]); //print b until no more
            }
        }
    }
    return c; //return new shuffled vectors with componenets of a and b
}

int main()
{
    vector<int> d{1,3,5,7,8,9};
    vector <int> f{3,6,8};
    vector <int> q = shuffle(d,f);
    for(int i = 0; i < q.size(); i++)
    {
        cout << q[i] << endl;
    }
    vector<int> r;
    vector <int> u{3,5,8};
    vector <int> h = shuffle(r,u);
    for(int i = 0; i < h.size(); i++)
    {
        cout << h[i] << endl;
    }
}