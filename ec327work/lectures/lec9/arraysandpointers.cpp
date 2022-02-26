#include <iostream>
using namespace std;

int main ()
{
    int myArray[5] = {1,2,3,4,5};

    // prints address of the array
    cout << myArray << endl;

    // points to the 3nd element in array
    cout << myArray[2] << endl;

    int secondArray[10] = {1,2,3,4,5,6,7,8,9,0};

    cout << "Address of Array: " << secondArray << endl;
    
    for (int i = 0; i < 10; i++)
    {
        // *(secondArray) returns the first index in the array
        cout << "Element " << i << ": " << secondArray[i] << " " << *(secondArray+i) << endl;
    }

    return 0;
}