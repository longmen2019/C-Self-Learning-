#include <iostream>
using namespace std;


  // the power() wil take two arguments
  // it will take a base number and it will also take a power number
  
int power(int baseNum, int powNum)
// we will take the result number to the power number 
// we are going to assume that the powNum is positive
//exponent function is a function that will take number to a specific power
// we are using for loop here means that we can loop through for the specified nums of powNum
// we are incremening the number of i anytime we loop
{
  int result = 1;
  for ( int i = 0 ; i < powNum; i++)
  {
    // result is the value of baseNum
    result = result * baseNum;
  }
return result;
}

int main()
{
  cout << power(2,3);
  return 0;

}