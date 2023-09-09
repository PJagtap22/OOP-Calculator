#include <iostream>
#include <cmath>

using namespace std;

double calculator(double a, double b, char opr);

int main()
{

    double num1, num2;
    char opr;

    // Calculator calculator;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /, %, square, sqrt, ^, ln, log Q for quit): ";
    cin >> opr;

    // other operators/characters other than these would output a message "Invalid operation".

    while(opr != '+' && opr != '-' && opr != '*' && opr != '/' && opr != '%' && opr != 's' 
    && opr != 'r' && opr != '^' && opr != 'l' && opr != 'o')
    {
        cout << "Invalid operation" << endl;
        return 1;
    }

    if (opr != 's' && opr != 'r' && opr != 'l' && opr != 'o')
    {
        cout << "Enter second number: ";
        cin >> num2;
    }
    else
    {
        num2 = 0; // num2 is set to be 0
    }
    cout << "Result: " << calculator(num1, num2, opr) << endl;

    system("PAUSE");
    return 0;
}

double calculator(double a, double b, char opr)
{
    double result = 0.0;

    if (opr == '+')
    {
        result = a + b;
    }
    else if (opr == '-')
    {
        result = a - b;
    }
    else if (opr == '*')
    {
        result = a * b;
    }
    else if (opr == '/')
    {
        result = a / b;
    }
    else if (opr == '%')
    {
        result = (a * b) / 100.0;
    }
    else if (opr == 's')
    {
        result = (a * a);
    }
    else if (opr == 'r')
    {
        if (a < 0)
        {
            cout << "Sqrt of negative no. not allowed." << endl;
            return 1;
        }
        result = sqrt(a);
    }
    else if (opr == '^')
    {
        result = pow(a, b);
    }
    else if (opr == 'l')
    {
        if (a <= 0)
        {
            cout << "NalturalLog defined for positive no. only." << endl;
            return 1;
        }
        result = log(a);
    }
    else if (opr == 'o')
    {
        if (a <= 0 || b <= 0)
        {
            cout << "Logarithm defined for positive no. only." << endl;
            return 1;
        }
        result = log10(a);
    }
    else
    {
        cout << "Please try again! " << endl;
    }
    return result;
}