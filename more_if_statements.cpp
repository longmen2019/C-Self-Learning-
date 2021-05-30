#include <iostream>
using namespace std;

// this function will take parameter of two numbers and will return whichever the largest
int getMax( int num1 , int num2)
// we are creating a variable integer named result
// we will store whicher the larger of num1 and num2 in variable result 
{
  int result;
  // we need to put a true or false value in the if condition. if the value is true we will execute it here and if it is false we will move on
  // we are going to use a comparison to find out which integer is bigger 
  if (num1 > num2)
  {
    //if num1 > num2 is true. it will return the code below
    result = num1;
  }
  // if num1 is not bigger than num2 or num1= num2, it will print the below codes
  else
  {
    result = num2;
  }
  return result;

}

int main()
{
  //so we will print out the result of the function in here 
  // this will get the result of 5
  cout << getMax(2,5);
  return 0;
}

#include <iostream>
using namespace std;

// we are giving a paramenters of three numbers : num1,num2,num3
int getMax (int num1, int num2 , int num3)
{
  int result;
  // we have to check if num1 >= num2 && num1 >= num3
  if (num1 >= num2 && num1 >= num3)
  {
    result = num1;
  }
  // we are checking if num2 is greater than or equal to num1 and num2 is greater than or equal to num3
  else if(num2 >= num1 && num2 >= num3)
  {
    result = num2;
  }
  else
  {
    result = num3;

  }
  return result;
}

int main()
{
  // we are gonna pass three parameters and it will return num3 = 7
  cout << getMax(2,5,7);
  return 0;
}