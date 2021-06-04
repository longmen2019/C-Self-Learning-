#include <iostream>
using namespace std;

// mark out a blue print for the book datatype 
// we basically tell C++ what a book is
// class is a template and a specifications 
class Book 
{
  public:
  string title;
  string author;
  int pages;
};

int main()
{
  // so we are going to create something called an object here
  // an object is an actual instant of that blue print/ class
  // object is an actual book

  Book book1 ;
  // we can assign value to book1
  book1.title = "Harry Potter";
  book1.author = "JK Rowling";
  book1.pages = 500;

  // we have two books here but both of these books are using the same template 
  // down here , we could create an individual instant of each book.
  
  Book book2;
  book2.title = "Lord of The Rings";
  book2.author = "Tolkein";
  book2.pages = 1000;
  // we are going to print out the object
  cout << book1.title<<endl;
  
  cout << book2.title<<endl;
  
  return 0;


  // string name = "Mike";
  // double pi = 3.14;
  // char favoriteLetter = 'G';
  // // a class is a new data type in C++
  // return 0;
}