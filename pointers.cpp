#include <iostream>
using namespace std;



int main()
{
  // storing information under the variables
  int age = 19;
  // To create a pointer variable, we start with * and also lower case pointer
  // when we type &, it will give us the memory address where the value is stored
  int *pAge = &age;
  double gpa = 2.7;
  double *pGpa = &gpa;
  string name = "Mike";
  string *pName = &name;

  //print out the pointer of the memory address of the pAge
  cout << pAge << endl;

  // any memory address we are working with is considered a pointer. 
  // the way we can acess where the memory is stored is by using &

 
  cout << "Age: " << & age << endl;
  cout << "Gpa:" << &gpa << endl;
  cout << "Name: " << &name << endl;
  // dereferencing a pointer 
  // dereferencing the pointer mean that we are telling the C++ that we are going to the memory and grab that address from the physical memory 
  // dereferencing is adding *
  // we are going to get value 19 which is the value stored in the memory address 
  cout << *pAge << endl;
  cout << *&gpa << endl;
  return 0;

}