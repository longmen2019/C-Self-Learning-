#include <iostream>
using namespace std;

int main()
{
  //create a few variables
  int num1, num2;
  // op = operator. Operator is +-*/ signs
  char op;

  cout << "Enter first number: "; 
  cin >> num1;

  cout << "Enter operator:";
  // here, the user can enter the signs 
  cin >> op;

  cout << "Enter second number:";
  cin >> num2;
  

  // we want to figure what the operator is
  // if the operator is equal to the + sign we will add num1 and num2
  int result;
  if (op == '+')
  {
    result = num1 + num2;

  }
  // here, we want to check if operator is a minus sign
  else if(op == '-')
  {
    result = num1 - num2;

  }
  // here, we want to check if the operator is the division sign
  else if (op == '/')
  {
    result = num1 / num2;
  }
  // here, we check if the operator is the multiply sign
  else if (op == '*')
  {
    result = num1 * num2;
  }
  // if the user enter an invalid operator we will print out the else statement
  else
  {
    cout << "Invalid Operator";
  }
  cout << result;
  return 0;
}