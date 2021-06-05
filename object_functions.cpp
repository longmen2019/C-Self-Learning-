#include <iostream>
using namespace std;

class Student
{
  // so we have information that defines students in our program
  public:
    string name;
    string major;
    double gpa;
    // Here, we have a constructor of these object to allow owners to pass in some initial information 
    Student (string aName, string aMajor, double aGpa)
    {
      name = aName;
      major = aMajor;
      gpa = aGpa;

    }
    //This function is gonna return a True or False value 
    //It is true if the student has honor. It is true if the student has a GPA of 3.5 or greater
    //If they don't it is going to return False. 
    bool hasHonors(){
      // this function is going to use different information depend on the object that call it
      if (gpa >= 3.5)
      {
        return true;
      }
      return false;
    }
};
int main()
{
  // we have two students that are working with here: student 1 and student 2 
  Student student1 ("Jim", "Business" , 2.4);
  Student student2 ("Pam" , "Art", 3.6);
  //we can check if students has honor 
  // if it is false it will print out 0
  // if it is true it will print out 1

  cout << student1.hasHonors()<<endl;
  cout << student2.hasHonors()<<endl;
  return 0;

}