#include <iostream>

using namespace std;

//create a function that will cube a number 
// when we creat a function in C++ we need to declare something called a return type
// return type is gonna tell what kind of value this functin is gonna return

double cube (double num)
// in this function we are going to cube a number and return the result what we get
{
  double result = num * num * num;
  // tell C++ to return the result
  return result;
}

int main()
{
  // down here we are going to call the function
  //store the value from this function inside this variable
  double answer = cube (5.0);
  //then we will print it out using cout 
  cout << answer;
  return 0;
}

#include <iostream>
using namespace std;

double cube (double num)
{
  double result = num * num * num;
  return result;
}
int main()
{
  // we can also do the shortcut without double answer
  cout << cube (5.0);
  return 0;
}

#include <iostream>
using namespace std;

double cube (double num)
{
  // we can also cut out double result variable
  return num * num * num;
}

int main()
{
  cout << cube (5.0);
  // when we type this "return" keyword, we're telling C++ that we're done execute this codes. Hence, any code below the "return" will not be executed
  return 0;
}