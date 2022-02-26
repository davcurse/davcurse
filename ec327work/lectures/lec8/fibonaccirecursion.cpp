#include <iostream>
using namespace std;

int fibo (int x)
{
    cout << "Calculating Fibonacci number of " << x << endl;

    if ((x == 0) || (x == 1)) return x;
    else return fibo (x - 1) + fibo (x - 2);
}

int main ()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    cout << fibo (x) << endl;
}

/*
Fibonacci numbers
fibo (0) = 0
fibo (1) = 1
fibo (x) = fibo (x-1) + fibo (x-2)
*/
