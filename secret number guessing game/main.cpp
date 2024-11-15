//
//  main.cpp
//  CIS25 - assignment 14
//
//  Created by maya nachiappan on 9/16/24.
//
// create a random number as a secret number, and using a while loop, continuously ask the user to guess the secret number.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); // random number generated using time seed
    int secret= rand()% 100+1; // generates a random number with a limit between 1-100
    int guess=0;
    
    cout << "guess a secret number between 1 and 100! " << endl;
    
    while (guess!= secret) // while loop if guess is not equal to the secret number
    {
        cout << "enter your guess: " << endl; // prompts user to guess
        cin >> guess;
    
    
    if (guess>=1 && guess <=100) // if guess is within range
    {
        if (guess < secret) // if guess is low
        {
            cout << "too low! try again!" << endl; // prompts user to guess higher
        }
        else if (guess > secret) // if guess is high
        {
            cout << "too high! try again!" << endl; // prompts user to guess lower
        }
        else if (guess == secret)
        {
            cout << "congrats! you found the secret number " << secret <<"!" << endl;
        }
    }
        else
        {
            cout << "error! you entered a number outside the range" << endl;
            return 1;
        }
    }
    return 0;
}
