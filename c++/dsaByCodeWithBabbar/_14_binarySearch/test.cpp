
// TODO https://leetcode.com/problems/sqrtx/submissions/1568790069/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long int findRoot(long long int n)
{
    long long int start = 0;
    long long int end = n;
    long long int ans;

    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        long long int squre = mid * mid;

        if (squre == n)
        {
            return mid;
        }
        if (squre < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << findRoot(n) << endl;
}