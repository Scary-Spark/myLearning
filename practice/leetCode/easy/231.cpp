#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n < 0)
    {
        if (n <= INT_MAX || n >= INT_MIN)
            n += (2 * n);
    }

    for (int i = 0; i < 31; i++)
    {
        if (n == (pow(2, i)))
        {
            return true;
        }
    }

    return false;
}