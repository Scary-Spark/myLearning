#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0;
    while (n >= 1 || n <= -1)
    {
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
            return 0;
        ans = ans * 10 + (n % 10);
        n = n / 10;
    }
    cout << ans << endl;
}