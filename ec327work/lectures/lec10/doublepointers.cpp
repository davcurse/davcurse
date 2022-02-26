#include <iostream>
using namespace std;

int main ()
{
    int x = 5;
    int *y = &x;            // Pointers should only hold addresses of variables
    int **z = &y;           // Doulbe pointers should only hold addresses of pointers

    cout << x << " " << &x << endl;
    cout << y << " " << &y << " " << *y << endl;
    cout << z << " " << &z << " " << *z << " " << **z << endl;
 
                            // z -> address of y
                            // *z -> value of y ( address of x )
                            // **z -> value stored at the address pointed by y ( value of x )

    int *feb = new int[28];
    int *mar = new int[31];
    int *month = feb;
    int **date = &month;

    for (int i=0; i<28; i++)
        feb[i] = i+1;

    for (int i=0; i<31; i++)
        mar[i] = i+1;

    for (int i=0; i<28; i++)
    {
        cout << "Today is February " << **date << endl;
        *date += 1;
    }

    month = mar;

    for (int i=0; i<31; i++)
    {
        cout << "Today is March " << **date << endl;
        *date += 1;
    }

    return 0;
}