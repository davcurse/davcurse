#include <iostream>
#include <cstring>
using namespace std;

void printer (string &s)
{
    cout << s << endl;
}
void printerNoAdd (string s)
{
    cout << s << endl;
}

int main ()
{
    string word = "Hi shamir";
    printer (word);
    printerNoAdd (word);

    return 0;
}

