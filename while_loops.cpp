// while loop allows to loop through blocks of codes while a certain conditions is true
// a while loop specifies a condition, as long as the condition is true, you are good to go and can loop through the codes in there
#include <iostream>
using namespace std;

int main()
{
  int index = 1; 
  // specify a condition inside the while loop. as long as the condition is true we can loop through and execute all the codes inside the curly brackets. As long as the conditions in that brackets is true we are going to execute the code in the curly brackets 
  while (index <= 5)
  // while the index is less than or equal to 5, we will execute the codes inside the curly brackets 
  {
    cout << index << endl;
    // here we are incrementing the index 1, 2, 3, 4, 5
    index ++;
  }
  return 0;
}

// inifite loop is when the condition in the while loop never becomes fault and the codes will continue to loop through

#include <iostream>
using namespace std;

int main()
{
  int index = 1;
  while (index <=5 )
  {
    cout << index << endl;
  
  }
}

// do while loop is the reverse of while loop. C++ is going to execute the codes and check the condition
// Here we are going to print out 6 while it is not possible in the regular while loop

#include <iostream>
using namespace std;

int main()
{
  int index = 6;
  do 
  {
    cout << index << endl;
    index ++;

  }
  while (index <=5);
  
  return 0;
}