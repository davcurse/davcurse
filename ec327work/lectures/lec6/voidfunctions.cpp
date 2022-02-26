#include <iostream>
using namespace std;

// VOID FUNCTIONS!!

void inc (int num)
{
    num += 1;
    cout << "num value after increment: " << num << endl;

    return;
}

int main ()
{
    int x = 5;
    
    cout << "x original value: " << x << endl;
    inc (x);
    cout << "x final value: " << x << endl;

    return 0;
}