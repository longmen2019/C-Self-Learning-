#include <iostream>
using namespace std;
// nested array is when you have for loop in another for loop
// we can make many arrays inside of there
// we also need to specify dimention for example 3 rows and 2 columns 

int main()
{
  int numberGrid [3][2] = 
                    {
                      {1,2},
                      {3,4},
                      {5,6}

                    };

// To access this element we need to specify the element inside the grid that we want to access
// 0 would specify to the overall element of {1,2} and 1 woud correspond to 2 inside the array
cout << numberGrid [0][1];

}

Nested for loops

#include <iostream>
using namespace std;

int main()
{
  int numberGrid [3][2] =
  {
    {1,2},
    {3,4},
    {5,6}
   };
// this loop is responsible for iterate all over the above elements
for (int i =0; i < 3; i++){
  // go through every elements inside this array
  for (int j = 0; j < 2 ; j++)
  {
    cout << numberGrid [i][j];
  }
  cout << endl;
}
return 0;
};
