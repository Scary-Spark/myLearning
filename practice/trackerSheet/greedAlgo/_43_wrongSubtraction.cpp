// todo   https://vjudge.net/contest/575138#problem/F
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < x; i++)
    {
        if (n % 10 != 0)
        {
            n--;
        }
        else
        {
            n /= 10;
        }
    }
    cout << n << endl;
}