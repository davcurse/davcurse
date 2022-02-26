#include <iostream>
using namespace std;

int main ()
{
    char letter,
         shape;
    int height,
        i,
        j;

    // User inputs character for printing and a number for pyramid height
    cout << "Enter a character: ";
    cin >> letter;
    cout << "Enter a height (between 1 and 20): ";
    cin >> height;

    // Error checks if user-inputted height is between 1 and 20
    while (cin.fail () || height > 20 || height < 1)
    {
        cout << "Error! You specified an invalid height!" << endl;
        cout << "Enter a height (between 1 and 20): ";
        cin >> height;
    }

    cout << "Enter pyramid shape (U for upright / I for inverted): ";
    cin >> shape;
    
    // Error checks if user inputted U or I for pyramid shape
    while (shape != 'U' && shape != 'I')
    {
        cout << "Error! You specified an invalid pyramid shape!" << endl;
        cout << "Enter pyramid shape (U for upright / I for inverted): ";
        cin >> shape;
    }

    // Prints upright pyramid if user inputted U
    if (shape == 'U')
    {
        for (i=1; i<=height; i++)
        {
            for (j=1; j<=i; j++)
            {
                cout << letter;
            }
            cout << endl;
        }
    }

    // Prints inverted pyramid if user inputted I
    if (shape == 'I')
    {
        for (i=height; i>=1; i--)
        {
            for (j=i; j>=1; j--)
            {
                cout << letter;
            }
            cout << endl;
        }
    }

    return 0;
}
