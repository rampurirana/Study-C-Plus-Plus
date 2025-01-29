#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number : " << endl;
    cin >> number;
    if (number <= 100 && number >= 80)
    {
        if (number > 90)
        {
            cout << "You have got first prize." << endl;
        }
        else
        {
            cout << "You have got second prize." << endl;
        }
    }
    else if (number < 80 && number > 50)
    {
        cout << "You have got third." << endl;
    }
    else
    {
        cout << "You have failed" << endl;
    }

    return 0;
}