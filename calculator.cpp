#include <iostream>
#include <cmath>
#include "calculator.h"

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
            std::cout << "Sqrt of negative no. not allowed." << std::endl;
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
            std::cout << "NaturalLog defined for positive no. only." << std::endl;
            return 1;
        }
        result = log(a);
    }
    else if (opr == 'o')
    {
        if (a <= 0 || b <= 0)
        {
            std::cout << "Logarithm defined for positive no. only." << std::endl;
            return 1;
        }
        result = log10(a);
    }
    else
    {
        std::cout << "Please try again! " << std::endl;
    }
    return result;
}

// #include "calculator.h"
// #include <cmath>

// double Calculator::add(double num1, double num2) {
// return num1 + num2;
// }

// double Calculator::sub(double num1, double num2) {
// return num1 - num2;
// }

// double Calculator::mult(double num1, double num2) {
// return num1 * num2;
// }

// double Calculator::div(double num1, double num2) {
// if (num2 == 0) {
//     return NAN; //not-a-number for division by 0
// }
// return num1/num2;
// }

// double Calculator::percentage(double num1, double num2) {
// return (num1*num2)/100.0;
// }

// double Calculator::square(double num1) {
// return num1*num2;
// }

// double Calculator::squareRoot(double num1) {
// return sqrt(num1);
// }

// double Calculator::power(double base, double exponent) {
// return pow(base,exponent);
// }

// double Calculator::naturalLog(double num1) {
// return log(num1);
// }

// double Calculator::logarithm(double base, double x) {
//     if (base <= 1) {
//     return NAN; //Not-a-number for invalid base
//     }
// return log(x)/log(base);
// }
