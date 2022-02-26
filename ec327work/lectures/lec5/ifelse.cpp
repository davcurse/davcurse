#include <iostream>
using namespace std;

// IF AND IF ELSE CONDITIONS

int main ()
{
    int x;
    cout << "Insert a value between 1 and 10: ";
    cin >> x;
    if ((x < 1) || (x > 10) || (cin.fail() != 0))
    {
        cout << "Error!" << endl;
    }
    else
    {
        cout << "The value of x is " << x << endl;

        if (((x % 3) == 0) && (x % 2) == 0)
        {
            cout << "x is divisible by 3 and 2" << endl;
        }
        else if ((x % 3) == 0)
        {
            cout << "x is divisible by 3" << endl;
        }
        else if ((x % 2) == 0)
        {
            cout << "x is divisible by 2" << endl;
        }
        else
        {
            cout << "x is not divisible by 3 and 2" << endl;
        }
    }

    return 0;
}