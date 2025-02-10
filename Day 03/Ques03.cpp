// Multiplication table with the help of do while loop

#include <iostream>
using namespace std;

int main()
{
    int table;
    cout << "Enter the number of table : ";
    cin >> table;
    int i = 1;
    do
    {
        int multiply = table * i;
        cout << table << " * " << i << " = " << multiply << endl;
        i++;
    } while (i <= 10);

    return 0;
}