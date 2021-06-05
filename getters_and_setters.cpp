// valid rating that we want to enforce needs to use Getter and Setter
#include <iostream>
using namespace std;

class Movie{
  // we also use another domain call private
  // any attributes, any variable, any functions, anything that we put under this private keyword is going to be private
  // only code inside the movie can access the rating
  private:
  string rating;

  public:
  // public means any outside codes can access to this domain
  // Here are the attribtes of a movie
    string title;
    string director;
    // string rating;
    // here is a constructor and we also have values passed inside those objects 
    Movie (string aTitle, string aDirector, string aRating){
      title = aTitle;
      director = aDirector;
      // rating = aRating;
      setRating(aRating);

    }
    // we are going to create a public function called setRating()
    // it takes Rating as a parameter
    void setRating(string aRating){
      // so now if we are going to give a value to rating, we are goint to make it so we have to go through this set rating function
      // rating = aRating;
      //so we are going to set rule for the types of rating that we consider valid
      if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        rating = aRating;

    // if it is not a valid rating then we are going to use an else clause} 
    else{
      rating = "NR";}

    }
    // so we cannot access avenger rating because it is private so what we can do is to set up another string
    string getRating(){
      return rating;
    }
      
};
int main()
{
  // we want to restrict what type of rating that could be stored inside of a movie
  Movie avengers ("The Avengers" , "Joss Whedon", "PG-13");
  // we are going to print the rating: PG-13
  // anytime we are setting the rating we have to go through this setRating function 
  avengers.setRating ("Dog");
  cout << avengers.getRating();
  return 0;
}

 