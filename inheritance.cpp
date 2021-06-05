#include <iostream>
using namespace std;

class Chef
{
  public:
    void makeChicken()
    {
      cout << "The chef makes chicken" << endl;
    }
    void makeSalad()
    {
      cout << "The chef makes salad"<< endl;
    }
    void makeSpecialDish()
    {
      cout << "The chef makes bbq ribs" << endl;
    }
};

int main()
{
  // creating instance of the chef class
  Chef chef;
  chef.makeChicken();

  return 0;
}
#include <iostream>
using namespace std;

class Chef
{
  public:
    void makeChicken()
    {
      cout << "The chef makes chicken" << endl;
    }
    void makeSalad()
    {
      cout << "The chef makes salad"<< endl;
    }
    void makeSpecialDish()
    {
      cout << "The chef makes bbq ribs" << endl;
    }
};

// we want the Italian chef to do everything the normal chef could do
// on top of that, the ItalianChef could also do other bunch of stuffs 
// public:Chef refers to the class that we want the ItalianChef to inherit from
// therefore, the ItalianChef can do all the functionalities that the Chef could do
class ItalianChef: public Chef{

};

int main()
{
  
  Chef chef;
  chef.makeChicken();
// even though the ItalianChef class is empty we still are able to call make chicken on Italian chef
  ItalianChef italianChef;
  italianChef.makeChicken();

  return 0;
}

#include <iostream>
using namespace std;

class Chef
{
  public:
    void makeChicken()
    {
      cout << "The chef makes chicken" << endl;
    }
    void makeSalad()
    {
      cout << "The chef makes salad"<< endl;
    }
    void makeSpecialDish()
    {
      cout << "The chef makes bbq ribs" << endl;
    }
};

// we want the Italian chef to do everything the normal chef could do
// on top of that, the ItalianChef could also do other bunch of stuffs 
// public:Chef refers to the class that we want the ItalianChef to inherit from
// therefore, the ItalianChef can do all the functionalities that the Chef could do
class ItalianChef: public Chef{
  public:
    void makePasta(){
      cout << "The chef makes pasta" << endl;
  }
};

int main()
{
  
  Chef chef;
  chef.makeChicken();
// even though the ItalianChef class is empty we still are able to call make chicken on Italian chef
  ItalianChef italianChef;
  // italianChef.makeChicken();
  italianChef.makePasta();

  return 0;
}

#include <iostream>
using namespace std;

// we are calling this chef class as super class
class Chef
{
  public:
    void makeChicken()
    {
      cout << "The chef makes chicken" << endl;
    }
    void makeSalad()
    {
      cout << "The chef makes salad"<< endl;
    }
    void makeSpecialDish()
    {
      cout << "The chef makes bbq ribs" << endl;
    }
};

// we are calling this italianchef class as subclass  because the italianchef class is inheriting from the chef class
class ItalianChef: public Chef{
  public:
    void makePasta(){
      cout << "The chef makes pasta" << endl;
      // overwrite a certain function,e.g., makeSpecialDish
    }
    void makeSpecialDish()
    {
      cout <<"The chef makes chicken parm" <<endl;
    }
  
};

int main()
{
  
  Chef chef;
  chef.makeSpecialDish();
// even though the ItalianChef class is empty we still are able to call make chicken on Italian chef
  ItalianChef italianChef;
  // italianChef.makeChicken();
  italianChef.makeSpecialDish();

  return 0;
}