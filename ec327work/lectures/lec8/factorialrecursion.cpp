#include <iostream>
using namespace std;

/* Sample recursion !!!
int main ()
{
    int hello ()
    {
        hello ();
        return 0;
    }
}
*/


// Factorial function with recursion
int factorial (int x)
{
    cout << "Calculating factorial of " << x << endl;

    if (x == 0) return 1;
    else return x * factorial (x - 1);
}

int main ()
{
    int x;
    cout << "Insert a number: ";
    cin >> x;

    cout << factorial (x) << endl;
    
    return 0;
}

/* 
Factorial (!)
n! = n * (n-1)!
0! = 1

Example:
factorial (3)     =
3 * factorial (2) = 6
2 * factorial (1) = 2
1 * factorial (0) = 1
*/
