#include <iostream>
using namespace std;

/* 
Namespaces
- A namespace is a set of names 
that are used to refer to program elements (e.g., variables)

- A namespace ensures that all
program elements have unique names so that they can be easily
identified

- C++ allows you to define multiple namespaces so that
you can reuse names in different contexts
*/

unsigned int temp = 285; //kelvin
namespace fahrenheit
{
    int temp = 10;
}
namespace celsius
{
    int temp = -12;
}

int main ()
{
    cout << "Kelvin: " << temp << endl;
    cout << "Fahrenheit: " << fahrenheit::temp << endl;
    cout << "Celsius: " << celsius::temp < <endl;

    return 0;
}

