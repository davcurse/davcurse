#include <iostream>
using namespace std;

void ourSwap (int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return;
}

int main ()
{
    int a = 3;
    int b = 5;

    // pointers can only hold addresses  !!!!!!
    ourSwap (&a, &b);

    cout << a << " " << b << endl;

    return 0;
}

/* Differences between references and pointers!

- A refreence is the address of a variable, can't be changed, always valid

