// GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h> // std library to use std srand
using namespace std; // to use cout and cin

int main() // apart of every c++ script
{
    cout << "Hello World!\n";
    srand(time(NULL)); //initialize seed for random function
    int randint = rand() % 100 + 1; // random function from 0 to 99 so add 1
    int guess= 0; // assign guess variable an initial value

    cout<<randint<<endl; //debugging - printing random guess
    do { // while statement
        cout << "Enter a number between 1 and 100: "; //ask through consul
        cin >> guess; //"receive input and accept as variable guess
        int check = guess;
        if (check > randint) { cout << "Too high." << endl; } //guessing low numbers below the randint will still result in the 'too high' message
        else if (guess < randint) { cout << "Too low." << endl; } // will never occur
        else {
            cout << "That's Right!" << endl;
            exit(0);
        } 
    } while (randint != guess);
}



