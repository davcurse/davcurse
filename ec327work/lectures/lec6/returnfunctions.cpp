#include <iostream>
using namespace std;

// FUNCTIONS THAT RETURN!!

int inc (int num)
{
    num += 1;
    cout << "num value after increment: " << num << endl;
    
    return num;
}

int main ()
{
    int x = 5;

    cout << "x original value: " << x << endl;
    x = inc (x);
    cout << "x final value: " << x << endl;

    return 0;
}