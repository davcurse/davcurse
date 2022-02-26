#include <iostream>
using namespace std;

// Heap blocks live indefinitely - you need to manually free them when you don't neeed them anymore.

int main ()
{
    // Dangling Pointer - a pointer pointing to an area that was freed. Example:

    int *p = new int;
    *p = 5;

    cout << "p points to " << p << " containing value " << *p << endl;

    // delete p; deleteing the memory region that p points to.
    // The area of memory is available on the heap again.
    delete p;

    cout << "p points to " << p << " containing value " << *p << endl;

    int *p1 = new int;
    *p1 = 9853;

    // p1 and p point to the same address!!!
    // the 'new int' assigns the pointers to the same addresses.
    cout << "p1 points to " << p1 << " containing value " << *p1 << endl;
    cout << "p points to " << p << " containing value " << *p << endl;

    // To deal with this, you could make pointers point to 0 
    // after memory is freed and check if the pointer is 0 before accessing it.

    return 0;
}