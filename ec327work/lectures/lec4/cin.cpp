#include <iostream>
using namespace std;

int main ()
{
    int x;
    
    cout << "Enter a number:";
    cin >> x;
    
    if (cin.fail() != 0)
    {
        cout << "Error!" << endl;
        return 1;
    }

    cout << "Inserted value:" << x << endl;

    return 0;
}