#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  int age;
  cout << "Enter your age: ";
  //Store interger input using CIN 
  cin >> age;
  // Then print out the input variable
  cout << "You are " << age << " years old";

  return 0;
}

// we can also use double instead of int

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  double age ;
  cout << "Enter your age:";
  //store integer input in CIN
  cin >> age ;
  //Then print out the input variable
  cout << "You are " << age << " years old";
  return 0; 
}

// we can also ask for character input using char 
#include <iostream>
using namespace std;

int main()
{
  char age ;
  cout << "Enter your age :";
  //store integer input in cin
  cin >> age ;
  //then print out the input variable 
  cout << "You are " << age << " years old";
  return 0 ; 
}

#include <iostream>
using namespace std;
int main()
{
  string name ;
  cout << "Enter your name:" ;
  //getline command allows to get an entire line of texts that the users enter 
  //cin is like a command prompt whenever we enter into stuffs into that cmd prmopt
  getline (cin, name);
  cout << " Hello " << name;

  return 0;
}
 


