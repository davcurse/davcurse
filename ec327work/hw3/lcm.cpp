#include <iostream>
using namespace std;

int lcm (int a, int b)
{
    int num1 = a,
        num2 = b;

    while (num1 != num2)
    {
        while (num1 > num2) num2 += b;
        while (num2 > num1) num1 += a;
    }

    return num1;
}
