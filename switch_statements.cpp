#include <iostream>
using namespace std;

//create a function that will be able to convert the number of days into a week
//if the user pass 0 I want the C++ to convert it into Sunday
//if the user pass 1 I want the C++ to convert it into Monday
// This parameter will take input from 0 through 6
string getDayofWeek(int dayNum)
{
  //our goal here is to populate the dayName with correct day of the week 
  string dayName;
  //switch statement take the if and else if statement and make it a lot easier 
  // the parameter in switch is dayNum that we will compare to other different value
  switch(dayNum)
  {
    // in the case dayNum = 0, dayName is equal to Sunday
    case 0: 
    dayName = "Sunday";
    // break statement is breaking us out of the switch statement. if we don't do break it will keep going check the case.
    break;
    // in the case dayNum = 1 , dayName is equal to Monday
    case 1:
    dayName = "Monday";
    break;
    case 2:
    dayName = "Tuesday";
    break;
    case 3:
    dayName = "Wednesday";
    break;
    case 4:
    dayName = "Thursday";
    break;
    case 5:
    dayName = "Friday";
    break;
    case 6:
    dayName = "Saturday";
    break;
    // if the user does not enter the value from 1 through 6 the code inside the default block will be executed
    default:
    dayName = "Invalid Day Number";
    
  }
  {

  }
  return dayName;

}

int main()
{
  cout << getDayofWeek(10);
  return 0; 
}