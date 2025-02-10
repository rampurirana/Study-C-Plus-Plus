// While loop : The while loop is used when the number of interation is not know. It checks the conditon before executing the loop body.

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 10)
    {
        cout << "Number : " << i << endl;
        i++;
    }
    return 0;
}