#include <cmath>
#include "calculator.h"
#include <stdexcept>

using namespace std;

void Calculator::calculator(double a, double b, char opr, double *result)
{

switch (opr) {
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
            if (b != 0) {
                *result = a / b;
            } else {
                throw runtime_error("UNDEFINED");
            }
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
            if (a >= 0) {
                *result = sqrt(a);
            } else {
                throw runtime_error("Square root of a negative number is not allowed.");
            }
            break;
        case 'l':
            if (a > 0) {
                *result = log(a);
            } else {
                throw runtime_error("Natural logarithm is defined for positive numbers only.");
            }
            break;
        case 'o':
            if (a > 0) {
                *result = log10(a);
            } else {
                throw runtime_error("Logarithm is defined for positive numbers only.");
            }
            break;
        default:
            throw runtime_error("Please try again!");
    }

}