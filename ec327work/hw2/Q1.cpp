#include <iostream>
using namespace std;

int main ()
{
    int a,
        b;
    float result;
    char op;

    cout << "Enter an expression to evaluate: ";
    cin >> a >> op >> b;

    // Checks if numbers inputted are actually numbers; prints errors if not
    if (cin.fail ())
    {
        cout << "Error! You did not provide two numerals as operands." << endl;
        return 0;
    }

    if (op == '*') result = a * b;
    // Division case checks if divisor is 0; prints error if it is
    else if (op == '/')
    {
        if (b == 0)
        {
            cout << "Error! You can't divide a number by 0!" << endl;
            return 0;
        }
        // Float cast on variables => floating-point division (with decimals)
        result = (float) a / (float) b;
    }
    else if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    else
    {
        cout << "Error! '" << op << "' is not a supported operator." << endl;
        return 0;
    }

    cout << "Result: " << result << endl;

    return 0;
}