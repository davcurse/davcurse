#include <iostream>
using namespace std;

// inline 
inline void isDivisible (int, int);

int main ()
{
    int x = 20;
    int y = 5;
    isDivisible (x, y);

    return 0;
}

inline void isDivisible (int a, int b)
{
    if ((a % b) == 0)
    {
        cout << a << " is divisible by " << b << endl;
    }
    else
    {
        cout << a << " is not divisible by " << b << endl;
    }
}

// static variable = similar to persistent variable
void count ()
{
    static int = 0;
}

// arrays
void arrayMake ()
{
    // number array
    int myArray [10];
    
    // strings are char vectors; USE DOUBLE QUOTES FOR STRINGS!!
    char string [] = "hello";
    // [H][E][L][L][O][\o] --> string delimiter so it is 6 chars long.

}