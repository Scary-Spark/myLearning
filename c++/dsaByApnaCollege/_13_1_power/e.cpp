// TODO testing
#include <bits/stdc++.h>
using namespace std;
long long findTotalPair(int d, int a)
{
    int power = d;
    long long maxLimit = 1;
    double digit =
        while (power > 0)
    {
        if (power % 2 == 1)
        {
            maxLimit *= digit;
        }
    }
}
int main()
{
    int testCase;
    cin >> testCase;
    for (int i = 1; i <= testCase; i++)
    {
        int d, a;
        cin >> d >> a;
        cout << "Case " << i << ": " << findTotalPair(d, a) << endl;
    }
}