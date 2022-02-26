#include <iostream>
using namespace std;

int main ()
{
    int num,
        counter;

    cout << "What number would you like me to check? ";
    cin >> num;

    while (num > 0)
    {

        counter = 0;
        cout << "1";
        for (int i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                cout << "," << i;
                counter++;
            }
        }
        cout << endl;

        if (counter == 1)
            cout << "This number is Prime!" << endl;
        else
            cout << "This number is not Prime!" << endl;

        cout << "What number would you like me to check? ";
        cin >> num;
    }

    cout << "I don't deal with negativity" << endl;

    return 0;
}