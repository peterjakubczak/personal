#include <iostream>
#include "Book.H"
using namespace std;

int main(){
    Book b3 = Book();
    string a = "is this the author?";
    b3.setAuthor(a);
    cout << b3.getAuthor() << endl;
    
    Book b2 = Book();
    string t = "is this the title?";
    b2.setTitle(t);
    cout << b2.getTitle() << endl;
    
}