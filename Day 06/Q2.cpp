// Create holo rectangle pattern

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Please enter the rows : ";
    cin >> row;
    cout << "Please enter the columns : ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row)
            {
                cout << "*";
            }
            else if (j == 1 || j == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}