#include <iostream>
#include <cmath>
#include <stdexcept>
#include <assert.h>
#define NDEBUG // disabling assertion

using namespace std;

class Calculator
{
public:
    void calculator(double a, double b, char opr, double *result)
    {
        switch (opr) // checks the value of opr
        {
        case '+':
            *result = a + b;
            break;
        case '-':
            *result = a - b;
            break;
        case '*':
            *result = a * b;
            break;
        case '/':
            if (b != 0)
            {
                *result = a / b;
            }
            else
            {
                throw runtime_error("UNDEFINED");
            } // the program is successfully compiled but in runtime throws an error.
            break;
        case '%':
            *result = (a * b) / 100.0;
            break;
        case 's':
            *result = a * a;
            break;
        case '^':
            *result = pow(a, b);
            break;
        case 'r':
            if (a >= 0)
            {
                *result = sqrt(a);
            }
            else
            {
                throw runtime_error("Square root of a negative number is not allowed.");
            }
            break;
        case 'l':
            if (a > 0)
            {
                *result = log(a);
            }
            else
            {
                throw runtime_error("Natural logarithm is defined for positive numbers only.");
            }
            break;
        case 'o':
            if (a > 0)
            {
                *result = log10(a);
            }
            else
            {
                throw runtime_error("Logarithm is defined for positive numbers only.");
            }
            break;
        default:
            throw runtime_error("Please try again!");
        }
    }
};

int main()
{
    Calculator calc; // an instance of calculator is created
    double num1, num2;
    char opr;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /, %, s, r, ^, l, o): ";
    cin >> opr;
    assert(opr == '+' || opr == '-' || opr == '*' || opr == '/' || opr == '%' ||
           opr == 's' || opr == '^' || opr == 'r' || opr == 'l' || opr == 'o');
    // checks if the operation entered is valid, is not the program will terminate with an assertion failed message.
    while (opr != '+' && opr != '-' && opr != '*' && opr != '/' && opr != '%' &&
           opr != 's' && opr != 'r' && opr != '^' && opr != 'l' && opr != 'o')
    // This loop continues until a valid operator is entered. It repeatedly prompts for valid input if an invalid operator is provided.
    {
        cout << "Invalid operation. Enter a valid operator: " << endl;
        cin >> opr;
    }

    if (opr != 's' && opr != 'r' && opr != 'l' && opr != 'o')
    {
        cout << "Enter second number: ";
        cin >> num2;
    }

    try
    {
        double *result = new double; // Allocate dynamic memory for the result
        calc.calculator(num1, num2, opr, result);
        cout << "Result: " << *result << endl;
        delete result; // Deallocate the memory when done
    }
    catch (const runtime_error &msg)
    {
        cout << "Error: " << msg.what() << endl;
    }
    catch (...)
    {
        cout << "An unexpected error occurred." << endl;
    }

    return 0;
}
