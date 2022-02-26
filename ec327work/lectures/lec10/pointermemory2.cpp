#include <iostream>
using namespace std;

int main ()
{
    int *p;

    for (int i=0; i<100; i++) // 100 heap blocks that are all unmatched.
    {
        p = new int;
        *p = i;
        delete p;
        // *** Always make sure that every 'new' has a matching 'delete' ( to avoid memory leaks ).
    }

    return 0;
}