// TODO  https://vjudge.net/contest/575128#problem/A

#include <iostream>
#include <math.h>
using namespace std;
int findResult(int n)
{
    int ans = 0;
    ans = pow(n, 2) + pow(n - 1, 2);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << findResult(n) << endl;
}