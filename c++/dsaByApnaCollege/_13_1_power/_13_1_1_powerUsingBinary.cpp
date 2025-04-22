#include <iostream>
using namespace std;
int main()
{
    double digit = 3;
    int power = 2;
    double ans = 1;

    if (power < 0)
    {
        digit = 1 / digit;
        power = -power;
    }

    while (power > 0)
    {
        if (power % 2 == 1)
        {
            ans = ans * digit;
        }
        digit *= digit;
        power /= 2;
    }

    cout << "Ans: " << ans << endl;
}