// Switch Case Statement : A switch case statement is a control flow construct used to execute one block of code out of multiple options based on the value of variable.

#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter the number of day [eg. 1, 2, 3] : ";
    cin >> day;

    switch (day) // expression
    {
    case 1: // declaare case number one
        cout << "Sunday" << endl;
        break;

    case 2: // declare case number two
        cout << "Monday" << endl;
        break;

    case 3: // declare case number three
        cout << "Tuesday" << endl;
        break;

    default: // print dfault if no case met
        cout << "Please enter valid number." << endl;
    }

    return 0;
}