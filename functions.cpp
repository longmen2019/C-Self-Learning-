  // fuction is a container that you can store codes and you can reuse that codes throught out the program
#include <iostream>

using namespace std;

// create a function that is gonna say hi to user
// we put void here basically means that this function is not gonna return anything
void sayHi () {
  cout << "Hello Users";
//when we want execute something inside a function we need to do sth calling it
}
// we also need to name a function according to the purpose of the function

int main()
{
  cout << "Top ";
  //Here, it will automatically execute. Here we tell C++ to execute sayHi function
  sayHi();
  cout << " Bottom";
  return 0;
}


#include <iostream>
using namespace std ;

// Give sayHi parameter string name
void sayHi(string name)
{
  cout << "Hello" << name;

}

int main()

{
  //Give sayHi function a piece of function (parameter)
  // Now it is gonna print out "Hello Mike" and value "Mike" will be stored inside a variable
  sayHi(" Mike");

}

#include <iostream>
using namespace std;

// we can also specify multiple parameters inside a function
void sayHi (string name, int age )
{
  // we are going pass in another parameter "age"
  // also we put out endl so C++ will print out a new line
  cout << "Hello " << name << " You are " << age << endl;

}

int main()
{
  //this will take in age also 
  sayHi ("Mike" , 60);
  sayHi (" Tom" , 45);
  sayHi (" Steve" , 19);
  return 0;
}
// we cannot put the new function below the main fuction because it will not know that it exists and it will not be able to execute the function 


#include <iostream>
using namespace std;

void sayHi (string name, int age);

int main()
{
  sayHi ("Mike" , 60);
  sayHi ("Tom" , 45);
  sayHi ("Steve", 19);

  return 0 ; 
}

void sayHi (string name, int age)
{
  cout << "Hello" << name << "You are" << age << endl;
}
// we can also declare the function and then somewhere else below it we could recall it