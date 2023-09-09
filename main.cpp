
#include <iostream>
#include "calculator.h"

int main()
{
    double num1, num2;
    char opr;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operator (+, -, *, /, %, square, sqrt, ^, ln, log Q for quit): ";
    std::cin >> opr;

    // other operators/characters other than these would output a message "Invalid operation".

    while (opr != '+' && opr != '-' && opr != '*' && opr != '/' && opr != '%' && opr != 's' &&
           opr != 'r' && opr != '^' && opr != 'l' && opr != 'o')
    {
        std::cout << "Invalid operation" << std::endl;
        return 1;
    }

    if (opr != 's' && opr != 'r' && opr != 'l' && opr != 'o')
    {
        std::cout << "Enter second number: ";
        std::cin >> num2;
    }
    else
    {
        num2 = 0; // num2 is set to be 0
    }
    std::cout << "Result: " << calculator(num1, num2, opr) << std::endl;

    system("PAUSE");
    return 0;
}



// #include <iostream>
// #include <cmath>
// #include "calculator.h"
// #include "calculator.cpp"

// using namespace std;

// int main()
// {
//     double num1, num2;
//     char opr;

//     Calculator calculator;
//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter operator (+,-,*, /, %, percentage, square, sqrt, ^, ln, log): ";
//     cin >> opr;

//     // other operators/characters other than these would output a message "Invalid operation".

//     if (opr != '+' && opr != '-' && opr != '*' && opr != '/' && opr != '%' && opr != 'square' 
//     && opr != 'sqrt' && opr != '^' && opr != 'ln' && opr != 'log')
//     {
//         cout << "Invalid operation" << endl;
//         return 1;
//     }

//     //
//     if (opr != 'square' && opr != 'sqrt' && opr != 'ln' && opr != 'log')
//     {
//         cout << "Enter second number: ";
//         cin >> num2;
//     }
//     else {
//         num2 = 0; //num2 is set to be 0   
//         }

// //double calculator(double num1, double num2, char opr);
//     double result;

//     switch (opr)
//     {
//     case '+':
//         result = calculator.add(num1, num2);
//         break;
//     case '-':
//         result = calculator.sub(num1, num2);
//         break;
//     case '*':
//         result = calculator.mult(num1, num2);
//         break;
//     case '/':
//         if (num2 == 0)
//         {
//             cout << "Not divisible by 0." << endl;
//         }
//         result = calculator.div(num1, num2);
//         break;
//     case '%':
//         result = calculator.percentage(num1, num2);
//         break;
//     case 'square':
//         result = calculator.square(num1);
//         break;
//     case 'sqrt':
//         if (num1 < 0)
//         {
//             cout << "Sqrt of negative no. not allowed." << endl;
//             return 1;
//         }
//         result = calculator.squareRoot(num1);
//         break;
//     case '^':
//         result = calculator.power(num1, num1);
//         break;
//     case 'ln':
//         if (num1 <= 0)
//         {
//             cout << "NalturalLog defined for positive no. only." << endl;
//             return 1;
//         }
//         result = calculator.naturalLog(num1);
//         break;
//     case 'log':
//         if (num1 <= 0 || num2 <= 0)
//         {
//             cout << "Logarithm defined for positive no. only." << endl;
//             return 1;
//         }
//         result = calculator.logarithm(num1, num2);
//         break;
//     //default:
//     //    cout << "Not an operation" << endl;
//     //    return 1;
//     }

//     cout << "Result: " << result << endl;
//     return 0;
// }
