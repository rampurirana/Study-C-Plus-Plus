// Create simple calculator using switch case statement

#include <iostream>
using namespace std;

int main()
{
    // Taken user input
    int firstNum, secondNum, result;
    cout << "Please enter the first number : ";
    cin >> firstNum;
    char ope;
    cout << "Please enter operator [eg. +, -, *, /, %] : ";
    cin >> ope;
    cout << "Please enter the second number : ";
    cin >> secondNum;

    // switch case statement
    switch (ope)
    {
    case '+':
        result = firstNum + secondNum;
        cout << firstNum << " + " << secondNum << " : " << result;
        break;

    case '-':
        result = firstNum - secondNum;
        cout << firstNum << " - " << secondNum << " : " << result;
        break;

    case '*':
        result = firstNum * secondNum;
        cout << firstNum << " * " << secondNum << " : " << result;
        break;

    case '/':
        result = firstNum / secondNum;
        cout << firstNum << " / " << secondNum << " : " << result;
        break;

    case '%':
        result = firstNum % secondNum;
        cout << firstNum << " % " << secondNum << " : " << result;
        break;

    default:
        cout << "Please enter valid input.";
    }

    return 0;
}