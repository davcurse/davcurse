#include <iostream>
using namespace std;

//PRE INCREMENT AND POST INCREMENT

int main ()
{
    int x = 1;
    ++x;                    // pre-increment X = 2
    cout << x << endl;       // X = 2

    int y = 1;
    y++;                    // post-increment Y = 1
    cout << y << endl;       // Y = 2 NOW

    return 0;
}