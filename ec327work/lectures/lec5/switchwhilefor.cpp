#include <iostream>
using namespace std;

// SWITCH AND WHILE LOOPS

int main ()
{
    int x = 10;

    while (x > 0)
    {
        x--;
        cout << x << endl;
    }

    x = 10;
    while (true)
    {
        if ((x % 2) == 0)
        {
            cout << "x is even" << endl;
            //continue;   //go back to the while condition
            //break;      //exits the loop
        }
        x--;
        cout << x << endl;
    }

    return 0;
}

/* DO WHILE CONDITION
do
{
    Executes once, then evaluates the condition!!!

} while (condition)
*/

/* FOR LOOPS
for (variable; condition; operation)
{
    this executed as long as the condition is met
}

for (int i = 0; i<100; i++)
{
    Executes 100 times
}
*/