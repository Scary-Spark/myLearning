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

double findRootDec(int n, int precision, int integerPart)
{
    double ans = integerPart;
    double factor = 1;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n;)
        {
            ans = j;
            j = j + factor;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter an element: ";
    cin >> n;
    int precision;
    cout << "Enter precision: ";
    cin >> precision;

    int integerPart = findRoot(n);
    double decimalPart = findRootDec(n, precision, integerPart);
    double ans = decimalPart;
    cout << "Root of " << n << " is: " << ans << endl;
}