// TODO https://vjudge.net/contest/575128#problem/D

#include <iostream>
#include <algorithm>
using namespace std;
int profit(int b, int p, int f, int h, int c)
{
    // let h>c
    int profit = 0;
    if (h > c)
    {
        while (p > 0)
        {
            if (b < 2)
                return profit;
            p--;
            b -= 2;
            profit += h;
        }

        while (f > 0)
        {
            if (b < 2)
                return profit;
            f--;
            b -= 2;
            profit += c;
        }
    }
    else
    {
        while (f > 0)
        {
            if (b < 2)
                return profit;
            f--;
            b -= 2;
            profit += c;
        }
        while (p > 0)
        {
            if (b < 2)
                return profit;
            p--;
            b -= 2;
            profit += h;
        }
    }

    return profit;
}
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase > 0)
    {
        int b, p, f;
        int h, c;
        cin >> b >> p >> f >> h >> c;
        cout << profit(b, p, f, h, c) << endl;

        testCase--;
    }
}