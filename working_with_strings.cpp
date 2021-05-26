#include <iostream>
using namespace std;

int main()
{
  string phrase = "Giraffe Academy" ; 
  cout << phrase;

  return 0;
}

// To print number of character inside a phrase

#include <iostream>
using namespace std;

int main()
{
  string phrase = "Giraffe Academy";
  cout << phrase.length();

  return 0;
}

// To access character in a string 
// Index position of a string start with 0
#include <iostream>
using namespace std;
int main()
{
  string phrase = "Giraffe Academy";
  cout << phrase [2];
  return 0;
}

// Assign a new value of character to change a character in a string

#include <iostream>
using namespace std;

int main()
{
  string phrase = "Giraffe Academy";
  phrase [0] = 'p';
  cout << phrase;
  return 0;
}

// Find character or string in a phrase or string and also tells us which index it starts

#include <iostream>
using namespace std;

int main()
{
  string phrase = "Giraffe Academy";
  cout << phrase.find("Academy" , 0);
  return 0;
}

// substring allows us to take part of the string by only indicating the index: start and number of character we want to grab
// Here the index starts at 8 and we only grab 8 characters

#include <iostream>
using namespace std;

int main ()
{
  string phrase = "Giraffe Academy";
  cout << phrase.substr(8,3);
  return 0;
}

// Store substring in another string
#include <iostream>
using namespace std;

int main()
{
  string phrase = "Giraffe Academy";
  string phrasesub;
  phrasesub = phrase.substr(8,3);
  cout << phrasesub;
  return 0 ; 

}
