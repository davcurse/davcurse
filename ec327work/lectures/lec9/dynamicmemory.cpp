#include <iostream>
using namespace std;

    // heap is where dynamic variables are stored
    // in c++, you can allocate dynamic memory with the keyword new

    // dynamic memory survives the function call

int *reverseList (int *list, int size)
{
    // 'new' keyword
    int *reversed_list = new int[size];
    int j = 0;

    for  (int i = size-1; i>=0; i--)
    {
        reversed_list[j++] = list[i];
    }

    return reversed_list;
}

int main ()
{
    int myArray[5] = {1,2,3,4,5};
    int *p = reverseList (myArray, 5);

    cout << "Address of myArray: " << myArray << endl;
    cout << "Address of p: " << p << endl;

    for (int i=0; i<5; i++)
    {
        cout << myArray[i] << " " << p[i] << endl;
    }

    return 0;
}