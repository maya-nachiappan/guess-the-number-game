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
    srand(time(0));
    int secret= rand()% 100+1; // generates a random number with a limit between 1-100
    int guess=0;
    
    cout << "guess a secret number between 1 and 100! " << endl;
    
    while (guess!= secret)
    {
        cout << "enter your guess: " << endl;
        cin >> guess;
    }
    
    if (guess>=1 && guess <=100)
    {
        if (guess < secret)
        {
            cout << "too low! try again!" << endl;
        }
        else if (guess > secret)
        {
            cout << "too high! try again!" << endl;
        }
        else if (guess == secret)
        {
            cout << "congrats! you found the secret number!" << endl;
        }
        else
        {
            cout << "error! you entered a number outside the range" << endl;
            return 1;
        }
    }
    return 0;
}
