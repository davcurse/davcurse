#include <iostream>
using namespace std;

// FUNCTIONS WITH ADDRESSES!!

void inc (int &num)
{
    num += 1;
    cout << "num value after increment: " << num << endl;

    return;
}

int main ()
{
    int x = 5;

    cout << "x original value: " << x << endl;
    inc(x);
    cout << "x final value: " << x << endl;

    return 0;
}

// FUNCTIONS: USING ADDRESSES TO SWAP NUMBERS!!!!! 

/*
void swapab (int &a, int &b)
{
    int hold;
    hold = a;
    a = b;
    b = hold;

    return;
}

int main ()
{
    int a = 5,
        b = 3;

    cout << "a: " << a << endl << "b: " << b << endl;
    swapab (a, b);
    cout << "a: " << a << endl << "b: " << b << endl;

    return 0;

}
Outputs:
a: 5
b: 3
a: 3
b: 5
*/