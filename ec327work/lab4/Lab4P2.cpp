#include <iostream>
#include "countHeads.h"
using namespace std;

int main ()
{
    int coins,
        heads,
        nCr;
    
    char ans;

    do
    {
        cout << "How many coins would you like to flip? ";
        cin >> coins;
        cout << "How many heads do you want? ";
        cin >> heads;

        nCr = choose (coins, heads);
        cout << "Flipping " << coins << " coins, we can get " << heads << " " << nCr << " ways." << endl;

        cout << "Flip again? (y/n) ";
        cin >> ans;

    } while (ans == 'y');

    return 0;
}