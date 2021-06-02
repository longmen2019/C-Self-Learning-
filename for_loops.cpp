#include <iostream>
using namespace std;

int main()
{
  int index =1;
  while (index <= 5)
  {
    cout << index << endl;
    index ++;
  }
return 0;
}

#include <iostream>
using namespace std;

int main()
{
//   we are putting the initialization i = 1 and also a condition inside the for loop
// index <= 5 will tell the loop when it should stop and when it should go. 
// we are also incrementing variable i

  int nums;
 
  for (int i = 1; i <= 5; i++)

  {cout << i << endl;}
  return 0;
}

#include <iostream>
using namespace std;

int main()
{
// i is less than the element inside the array
// we can just print out num[i]
// for the first iteration of the loop it is going to print out num[0], num[1]....num[4]
  int nums [] = {1, 2, 5, 7, 3};
  for (int i =0 ; i < 5 ; i++)
  {
    cout << nums[i] << endl;
  }
  return 0;
}


