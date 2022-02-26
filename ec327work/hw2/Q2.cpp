#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Generates random number with time (NULL) as seed; random number is positive integer between 1-10
    srand (time (NULL));
    int random = rand () % 10 + 1,
        guess;

    while (guess != random)
    {
        cout << "Please guess the number: ";
        cin >> guess;

        if (cin.fail ())
        {
            cout << "Error! You didn't insert a number!" << endl;
            // Clears error state from cin.fail ()
            cin.clear ();
            // Removed the error character from cin
            cin.ignore(100, '\n');
            continue;
        }

        if (guess > random)
            cout << "Sorry, your guess is incorrect. Your guess was too high." << endl;
        else if (guess < random)
            cout << "Sorry, your guess is incorrect. Your guess was too low." << endl;
    }

    cout << "Congratulations, your guess is correct!" << endl;

    return 0;
}