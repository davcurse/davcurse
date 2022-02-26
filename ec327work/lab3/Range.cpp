#include <iostream>
using namespace std;

int main ()
{
    int start,
        stop,
        step;

    do{

        cout << "Start = ";
        cin >> start;
        cout << "Stop = ";
        cin >> stop;
        cout << "Step = ";
        cin >> step;

        if (start > stop)
        {
            cout << start;
            for (int i = start-step; i >= stop; i -= step)
            {
                cout << "," << i;
            }
            cout << endl;
        }
        else if (start < stop)
        {
            cout << start;
            for (int i = start+step; i <= stop; i += step)
            {
                cout << "," << i;
            }
            cout << endl;
        }

    } while (start != stop);

    cout << "Bye, bye!" << endl;

    return 0;
}