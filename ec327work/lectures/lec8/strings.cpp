#include <string>
#include <iostream>
using namespace std;

// STRINGS AND ARRAYS !!!!!
int main ()
{
    string s = "";

    cout << "Insert your string:" << endl;

    // cin >> s; NOT THAT GOOD BC IT STOPS AFTER SPACE --> USE GETLINE FUNCTION
    // getline (cin, (stringVariable), (up until))

    getline (cin, s, '\n');

    cout << "Your string is: " << s << endl;

    // (string).length () returns length of string
    cout << "The string's length is " << s.length () << endl;

    for (int i = 0; i < s.length (); i++)
    {
        // (string).at () returns character at position (number) of string
        cout << s.at (i) << endl;
    }

    return 0;
}

/* String concatenating!!!!
int main ()
{
    string s1 = "abcd";
    string s2 = "efgh";

    // concatenates strings
    string s3 = s1 + s2;
    cout << s3 << endl;
    
    if (s1 < s2)
    {
        cout << "s1 comes before s2 alphabetically" << endl;
    }

    return 0;
}
*/