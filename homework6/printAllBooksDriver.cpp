//CS1300 Fall 2019
//Author: Peter Jakubczak
//Recitation: 104 Anuj Pasricha
//Homework 6 - Problem 5


/**
 * Algorithim: Display contents of library

   1.  If books are less than or equal to 0, print no books are stored
   2. Go through each book and print authors name in class books
 
 
 * Input: Arrays and int
 * Output: No books are stored, or here is a list of books, or the title by author
 * Return: None
*/

void printAllBooks(Book books[], int numberOfBooks){
    if(numberOfBooks<=0){ //if no books
        cout << "No books are stored" << endl;
    }
    else{
        cout << "Here is a list of books" << endl;
        for(int i = 0; i < numberOfBooks; i++){
            
            cout << books[i].getTitle() << " by " << books[i].getAuthor() << endl; //print title and author for class Books
        }
        
        
    }
}

int main(){
Book book1 = Book("Book 1", "Author B");
Book book2 = Book("Book 2", "Author C");
Book book3 = Book("Book 3", "Author D");
Book listOfBooks[3] = {book1, book2, book3};
int numberOfBooks = 3;
string author = "Author A";
printBooksByAuthor(listOfBooks, numberOfBooks, author);

Book book1 = Book("Book 1", "Author A");
Book book2 = Book("Book 2", "Author B");
Book book3 = Book("Book 3", "Author A");
Book listOfBooks[3] = {book1, book2, book3};
int numberOfBooks = 3;
string author = "Author A";
printBooksByAuthor(listOfBooks, numberOfBooks, author);
}