#include "Q3.h"
#include <fstream>
#include <string>

float calculateAverage (string classname, string filename)
{
    int avg = 0,
        id,
        counter = 0;
    float total = 0;

    string name = classname;

    ifstream input;

    input.open (filename);

    while (input >> id >> classname >> avg)
    {
        if (classname == name)
        {
            total += avg;
            counter++;
        }
    }

    return total/counter;
}