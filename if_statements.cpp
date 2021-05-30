#include <iostream>
using namespace std;

int main()
{
  // boolean variable stores a true or false value
  bool isMale = true;
  // if statement allows us to respond to different situations
  // we're going to write an if statement to respond the situation where the user is a male and also where the user is not a male
  // inside the if bracket () we can specify a condition. if the condition in the bracket is true then we are going to execute the code, otherwise, we are going to move on 
  if (isMale)
  // if the value inside the if bracket is true we are going to execute the codes insdie the curly bracket 
  {
    cout << "You are a male";
  }
  // this will print out "You are a male" because the value of isMale = true
  return 0;
}

#include <iostream>
using namespace std;

int main()
{
// if the value inside the if bracket is false then the code will not be executed and no value will be printed out
bool isMale = false;
if (isMale) 
{
    // because the condition is false, it will not execute the code inside the curly brackets
  cout << "You are a male" ;
}
  return 0;
}

// we are using else statement to print another value if the condition inside the if () is false 
#include <iostream>
using namespace std;

int main()
{
  bool isMale = false;
  if (isMale)
  {
    //if male is true, it will print out this line of code
    cout << "You are a male" ;
  }
  else
  {
    //if male is not true it will print out this line of code
    cout << "You are not a male";
  }
  return 0;
}

#include <iostream>
using namespace std;

int main()
{
  bool isMale = true;
  bool isTall = true;

  if (isMale && isTall)
  {
    cout << "You are a tall male";
  }
  else
  {
    cout << "You are not a male" ;
  }
  // To check to see if that person is both male and tall
// we are using && opeartor if both conditions are true. && operator allows us to check two separate conditions
}

#include <iostream>
using namespace std;

int main()
{
  // if we are setting one codition to be not true, it the if code statement will not run and it will go to run the else statement instead.
  bool isMale = true;
  bool isTall = false;
  if (isMale && isTall)
  {
    cout << "You are a tall male";

  }
  else
  {
    cout << "You are not a male";
  }
  return 0;

}

#include <iostream>
using namespace std;

int main()
{
  bool isMale = true;
  bool isTall = false;
// the "||" or operator which requires only condition to be true for the whole operation to be true 
  if (isMale || isTall)
  {
    //since one of the condition is true will execute the code block inside the if statement 
    cout << "You are a tall male";
  }
  else 
  {
    cout << "You are not a male";
  }
  return 0;
}

// else if statement is after the if statement is false. C++ will check the else if statement before the else statement

#include <iostream>
using namespace std;

int main()

{
  bool isMale = false;
  bool isTall = true;

  // ! opeartor is to negate the statement it stands before
  if(isMale && isTall)
  {
    cout << "You are a tall male";

  }
  else if (isMale && !isTall)
  {
    cout << "You are a short male";
  }
  else if (!isMale && isTall)
  {
    cout << "You are tall but not a male";

  }
  else
  {
    cout << "You are not male and not tall";
  }
// here it mean the person is male and is not tall
// here it mean not male but is tall
// finally if all above is false, it will come to else statement
  return 0;
}