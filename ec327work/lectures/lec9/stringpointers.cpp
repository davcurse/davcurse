#include <iostream>
using namespace std;

char* sliceString (char *s)
{
    char c = s[0];
    int i = 0;

    while (c != '\0')
    {
        i++;
        if (c == ' ')
        {
            return s+i;
        }
        c = s[i];
    }
    return s;
}

int main ()
{
    char s[] = "This is a string with spaces";
    
    // returns string- cuts up to the first space
    cout << sliceString (s) << endl;

    return 0;
}