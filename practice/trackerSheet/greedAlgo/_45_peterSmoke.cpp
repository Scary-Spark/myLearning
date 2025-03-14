// TODO https://vjudge.net/contest/575138#problem/A

#include <iostream>
using namespace std;
int main()
{
    int n;
    int k;
    while (cin >> n >> k)
    {

        int total = n;
        int butt = k;
        while (n >= butt)
        {
            int temp = n / k;
            total += temp;
            n = (n % k) + temp;
        }
        cout << total << endl;
    }
}