// Creating table with the help of for loop

#include <iostream>
using namespace std;

int main()
{
    int table;
    cout << "Enter the table Number : ";
    cin >> table;
    for (int i = 1; i <= 10; i++)
    {
        int multiply = table * i;
        cout << table << " * " << i << " = " << multiply << endl;
    }
}