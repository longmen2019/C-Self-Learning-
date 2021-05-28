#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // create a string for color, plural noun and also celebrity
  string color, pluralNoun, celebrity;
  // we are also going to let users give them value 
  cout << "enter a color: ";
  // this getline command will let users enter a line of text and cin will accept the input
  getline(cin, color);
  
  cout << "enter a plural noun: ";
  getline(cin, pluralNoun);
  
  cout << "Enter a celebrity: ";
  getline(cin, celebrity);

  cout << "Roses are " << color << endl;
  cout << pluralNoun << " are blue" << endl;
  cout << "I love " << celebrity << endl;

  return 0; 
}