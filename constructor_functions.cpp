#include <iostream>
using namespace std;


class Book 
{
  public:
  string title;
  string author;
  int pages;
  Book(){
    // function get called twice because we are having book1 and book2
    cout << "Creating Object" << endl;
  }
};

int main()
{
  

  Book book1 ;
  
  book1.title = "Harry Potter";
  book1.author = "JK Rowling";
  book1.pages = 500;

// a constructor is a function that is gonna get call when we construct one of this object 
// the way that we can create a constructor is by creating a function for this program

  Book book2;
  book2.title = "Lord of The Rings";
  book2.author = "Tolkein";
  book2.pages = 1000;
 
  // cout << book1.title<<endl;
  
  // cout << book2.title<<endl;
  
  return 0;



}

#include <iostream>
using namespace std;

class Book
{
  public:
    string title;
    string author;
    int pages;
  // This book function can accept parameter like name 
  Book(string name){
  // Then we print out the name of the book here
    cout<< name << endl;
  }
};
int main()
{
  // pass value parameter in the Book book1 and Book book2
  Book book1 ("Harry Potter");
  book1.title = "Harry Potter";
  book1.author = "JR Rowling";
  book1.pages = 500;

  Book book2 ("Lord of The Rings");
  book2.title = "Lord of The Ring";
  book2.author = "Tolkin";
  book2.pages = 1000;


  return 0;
}

//Use these constructors in order to initialize our objects with information
#include <iostream>
using namespace std;

class Book
{
  public:
    string title;
    string author;
    int pages;
  //This constructor is gonna take three values 
  // a stands for argument

  // This is gonna give this object some information if we are not gonna pass anything
  // Give user multiple constructors so they can create their own objects 
  Book(){
    title = "no title";
    author = "no author";
    pages = 0;
  }
  Book (string aTitle, string aAuthor, int aPages)
  {
    // the title that is going to stored in this book is equal to the title that is going to get passed in
    title = aTitle; 
    author = aAuthor;
    pages = aPages;
  }
};
int main()
{
  // we can pass the value to the constructor and the constructor can initalize those value for us 
  // we can pass all the book value as parameters in Book book1 by using constructor
  Book book1 ("Harry Potter",  "JR Rowling",  500);
  Book book2 ("Lord of The Rings", "Tolkin",1000);
  // we can have book3 which we do not need to pass any information
  Book book3;

  cout << book3.title <<endl;

  return 0;
}