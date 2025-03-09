#include <iostream>
using namespace std;
long long int binaryForm(long long int n)
{
    int ans = 0, remainder, pow = 1;
    while (n > 0)
    {
        remainder = n % 2;
        n /= 2;
        ans += remainder * pow;
        pow *= 10;
    }
    return ans;
}
int main()
{
    long long int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = binaryForm(n);
    cout << "Binary form of " << n << " is: " << ans;
}