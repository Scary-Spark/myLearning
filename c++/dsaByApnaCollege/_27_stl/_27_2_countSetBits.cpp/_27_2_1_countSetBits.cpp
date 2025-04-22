#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
        int setBits = __builtin_popcount(n);
        long setBits = __builtin_popcountl(n);
        long long setBits = __builtin_popcountll(n);
    */
    int n;
    while (cin >> n)
    {
        cout << "Total set bits: " << __builtin_popcount(n) << endl; // for int
        long long p;
        cin >> p;
        cout << "Total set bits(long): " << __builtin_popcountll(p) << endl; // for long long
    }
}