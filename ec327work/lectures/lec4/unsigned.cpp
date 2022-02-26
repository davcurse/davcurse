#include <iostream>
using namespace std;

// Unsigned vs Signed int
int main ()
{
    int x = -256;
    unsigned int y = 32;

    y = x;
    cout << x << " " << y << endl;
    
    return 0;
}