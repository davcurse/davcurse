#include <iostream>
using namespace std;

int main ()
{
    int value = 5;

    int *p = &value;

    // prints memory location (address location) (random characters denoting memory) 
    cout << p << endl;
    // prints 'value' (5)
    // if you dereference the pointer (with the * operators), you get the value stored at the address contained in the pointer
    cout << *p << endl;

    return 0;
}