#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, product = 1;
    cin >> n;

    while (1)
    {
        int remainder = n % 10;

        product *= remainder;
        sum += remainder;
        n = n / 10;
        if (n < 1)
            break;
    }
    cout << product - sum << endl;
}