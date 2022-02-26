#include <iostream>
using namespace std;

int main ()
{
    int height;

    do
    {
        cout << "How tall of a ladder do you need? ";
        cin >> height;

        if (height == 0)
        {
            cout << "The height can't be zero." << endl;
            continue;
        }
        if (height % 2 == 1)
        {
            cout << "#  #" << endl;

            for (int i = height/2; i > 0; i--)
            {
                cout << "######" << endl;
                cout << "#  #" << endl;
            }
        }
        else
        {
            for (int i = height/2; i > 0; i--)
            {
                cout << "#  #" << endl;
                cout << "######" << endl;
            }
        }



    } while (height >= 0);

    cout << "The height of ladder entered is invalid" << endl;

    return 0;
}