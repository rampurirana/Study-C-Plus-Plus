// Continue Statement :
// Purpose : Skips the current iteration and proceeds to the next iteration of the loop
// Common Use : Skipping specific values or conditions without breaking the loop

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
            continue; // Skip when i is 3
        }
        cout << i << endl;
    }
    return 0;
}