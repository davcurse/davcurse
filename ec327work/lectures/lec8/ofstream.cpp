#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main ()
{
    string city;
    string date;
    int temperature;

    string file_name;

    cout << "Insert file name: ";
    cin >> file_name;

    // output file stream
    ofstream output;                          // DEFINE A STREAM
    output.open (file_name, ios::app);        // IOS :: APP --> APPEND
                                              // IOS :: OUT --> OVERWRITE (DEFUALT)

    cout << "Insert a date, city, temperature (separated by a space):" << endl;
    cin >> date >> city >> temperature;

    // similar to cout
    output << date << " " << city << " " << temperature << endl;

    output.close ();

    return 0;
}