
#include <iostream>
#include "calculator.h"
#include <assert.h>
#define DEBUG

using namespace std;

int main()
{
    Calculator calc;
    double num1, num2;
    char opr;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /, %, s, r, ^, l, o): ";
    cin >> opr;

    assert(opr == '+' || opr == '-' || opr == '*' || opr == '/' || opr == '%' 
    || opr == 's' || opr == '^' || opr == 'r' || opr == 'l' || opr == 'o');

    while (opr != '+' && opr != '-' && opr != '*' && opr != '/' && opr != '%' 
    && opr != 's' && opr != 'r' && opr != '^' && opr != 'l' && opr != 'o')
    {
        cout << "Invalid operation. Enter Valid operator: " << endl;
        cin >> opr;
    }

    if (opr != 's' && opr != 'r' && opr != 'l' && opr != 'o')
    {
        cout << "Enter second number: ";
        cin >> num2;
    }
    try
    {
        double result = calc.calculator(num1, num2, opr);
        cout << "Result: " << result << endl;
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

    // other operators/characters other than these would output a message "Invalid operation".
//     try
//     {
//         while (opr != '+' && opr != '-' && opr != '*' && opr != '/' && opr != '%' && opr != 's' &&
//                opr != 'r' && opr != '^' && opr != 'l' && opr != 'o')
//         {
//             cout << "Invalid operation. Enter Valid operator: " << endl;
//             cin >> opr;
//         }

//         if (opr != 's' && opr != 'r' && opr != 'l' && opr != 'o')
//         {
//             cout << "Enter second number: ";
//             cin >> num2;
//         }
//         double result = calc.calculator(num1, num2, opr);
//         cout << "Result: " << result << endl;
//     }
//     catch (const runtime_error &msg)
//     {
//         cout << "Error: " << msg.what() << endl;
//     }
//     catch (...)
//     {
//         cout << "An unexpected error occurred." << endl;
//     }
//     return 0;
// }