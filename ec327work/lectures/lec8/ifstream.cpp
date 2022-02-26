#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    string date;
    string city;
    int temperature;

    // input file stream
    ifstream input;                     // INPUT STREAM
    input.open ("temp.txt");            // OPEN FILE (READ ONLY)

    // similar to cin.fail ()
    if (input.fail ())                  // 
    {
        cout << "Error! The file does not exist!" << endl;
        return 1;
    }

    while (input >> date >> city >> temperature)
    {
        cout << date << " " << city << " " << temperature << endl;
    }

    input.close ();

    return 0;
}