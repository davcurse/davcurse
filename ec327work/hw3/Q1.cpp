#include "Q1.h"

int gcd (int x, int y)
{
    if (x == y) return x;

    while (x != 0 && y != 0)
    {
        if (x > y) x %= y;
        if (y > x) y %= x;
    }

    if (x == 0) return y;
    else return x;
}
