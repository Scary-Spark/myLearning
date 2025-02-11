#include <iostream>
#include <climits>
using namespace std;
long long int sum(long long int n)
{
    long long int s = 0;
    while (n > 0)
    {
        s = s + (n % 10);
        n = n / 10;
    }
    return s;
}
int main()
{
    long long int testCase;
    cin >> testCase;
    while (testCase > 0)
    {
        long long int x, y;
        bool found = false;
        cin >> x >> y;
        for (long long int i = 0; i < INT_MAX / 2; i++)
        {
            if (x == y)
                break;
            if (sum(i) == x && sum(i + 1) == y)
            {
                found = true;
                break;
            }
        }
        if (found == true)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
        testCase--;
    }
}