#include <iostream>
using namespace std;

int main()
{

  // create our secret number which is 7
  int secretNum = 7;
  int guess; 

  // inside the while loop, we are going to continually asking the user to input the number until he gets it right
  // We are going to keep looping while the secret num is not equal to guess
  while(secretNum != guess)
  {
    cout << "Enter guess: ";
    // we are going to store the user input inside the guess
    cin >> guess; 

  }
  // if they are getting out of the loop, it means they get the guess right
  cout << "You win!";
  return 0;
}

// We are giving a limit guesses for users
#include <iostream>
using namespace std;

int main()
{
  int secretNum = 7;
  int guess;
  // this variable will count how many times a uses has enteredg guesses 
  int guessCount =0;
  // Set the amount of guess until the user loses 
  int guessLimit = 3;
  // if out of guesses is falses it means the users still have many guesses left 
  bool outOfGuesses = false;
 
  // we also want to check if it is out of guess and also not out of guess in the while loop
  while (secretNum != guess && !outOfGuesses)
  { 
    // if the users reach their guesses we don't want them to continue guessing
    if (guessCount < guessLimit)
   {  cout << "Enter guess: ";
      cin >> guess;
    // Then we will keep track of how many times a user has guessed
      guessCount++ ;
  } 
  // if they are running out of guess. we are setting outofguess = True
  else
  {
    outOfGuesses = true;
  }

  }
  // if the user is out of guesses ,it mean they loses 
  if (outOfGuesses)

  {
    cout << "You Lose!";

  }
  // otherwise, if they still have guesses left 
  else
  {
    cout << "You Win!";
  }

  return 0;
}