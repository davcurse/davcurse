#include <iostream>
using namespace std;

int main ()
{
    int num;

    do
    {
        cout << "Enter value of N: ";
        cin >> num;

        if (num <= 0) break;
        if (num >= 10) break;

        for (int i = num; i > 0; i--)
        {
            for (int j = i-1; j > 0; j--)
            {
                cout << " ";
            }
            cout << i << endl;
        }

    } while (num > 0 && num < 10);

    cout << "Invalid value for N!" << endl;

}