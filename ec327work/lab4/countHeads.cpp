#include "countHeads.h"

double factorial (int n)
{
    if (n == 1) return 1;
    else return n * factorial (n-1);    
}


int choose (int N, int r)
{
    int times = N - r;
    double final = N;

    if (times == 1 || r == 1) return N;

    if (times < r)
    {
        for (int i = 1; i < times; i++) final *= N-i;
        return final / factorial (times);
    }
    else
    {
        for (int i = 1; i < r; i++) final *= N-i;
        return final / factorial (r);
    }
}