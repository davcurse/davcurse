#include "Q2.h"
#include <string>

void replace (string &s, char c1, char c2)
{
    for (int i=0; i<s.length(); i++)
    {
        if (s.at(i) == c1) s.at(i) = c2;
    }

}