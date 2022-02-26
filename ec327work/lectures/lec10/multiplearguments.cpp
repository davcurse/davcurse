#include <iostream>
using namespace std;

// argc contains the number of parameters
// argv is an array of strings

int main (int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << argv[0] << ": Please provide an integer as a parameter" << endl;
        return 1;
    }

    int x = stoi (argv[1]);
    
    cout << "The result is " << x*2 << endl;

    return 0;
}

/* 
    ./multiplearguments 12
    The result is 24

    ./multiplearguments
    ./multiplearguments: Please provide an integer as a parameter
*/