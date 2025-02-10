// do whilw loop : The do while loop is similar to the while loop, but it executes the loop body at least once before checking the conditons

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    do
    {
        cout << "Number : " << i << endl;
        i++;
    } while (i <= 10);
    return 0;
}