// Find the prime numbers under 100

#include <iostream>
using namespace std;
int main()
{
    int a = 2, b = 100;
    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << i << endl;
        }
    }
}