// Print rectangle pattern

#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Please enter the rows : ";
    cin >> rows;
    cout << "Please enter the columns : ";
    cin >> columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}