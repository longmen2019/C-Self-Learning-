#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //array allows us to store mulitple pieces of information inside a container
    // inside the array is called elements 
   int luckyNums[] = {4,8,15,16,23,42};
   //to access elements inside the array we put an index inside the brackets
   //array starts with index 0
   cout << luckyNums[0];

  return 0;
}

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  int luckyNums [] = {4,8,15,16,23,42};
  //we can also modify the element in the array
  luckyNums [0] = 19;
  cout << luckyNums[0];

  return 0; 
}

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  //Tell c++ to store 20 elements inside the array
  int luckyNums [20] ={4,8,15,16,23,42};
  luckyNums[10] = 100;
  cout << luckyNums[10];
  return 0;


}

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  //Tell C++ how many elements you wanna build it there and add it as you go
  int luckyNums [20];
  luckyNums [0] = 100 ;
  cout << luckyNums [0];
  return 0;
}

