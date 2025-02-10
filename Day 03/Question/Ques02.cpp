// Creating table with the help of while loop

#include <iostream>
using namespace std;

int main()
{
    int table;
    cout << "Enter the number of table : ";
    cin >> table;
    int i = 1;
    while (i <= 10)
    {
        int multiply = table * i;
        cout << table << " * " << i << " = " << multiply << endl;
        i++;
    }
    return 0;
}