#include "Q4.h"

int triangular (int num)
{
    if (num == 1) return num;
    else return num + triangular (num-1);
}