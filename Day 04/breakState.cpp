// Jump Statement : It is used to control the flow of loops and functions by altering the normal sequence of executions

// break statement :
// Purpose : Exits the loop immediately
// Common Use : Existing a loop when a certain condition is met

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}