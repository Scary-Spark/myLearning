#include <iostream>
using namespace std;
long long int decimalForm(long long int n)
{
    int ans = 0, remainder, pow = 1;
    while (n > 0)
    {
        remainder = n % 10;
        n /= 10;
        ans += remainder * pow;
        pow *= 2;
    }
    return ans;
}
int main()
{
    long long int n;
    cout << "Enter an element: ";
    cin >> n;
    long long int ans = decimalForm(n);
    cout << "Decimal form: " << ans << endl;
}