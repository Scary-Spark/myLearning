#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0, i = 0;
    if (n == 0)
        cout << "1" << endl;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            ans += (pow(2, i));
        }
        n = n / 2;
        i++;
    }

    cout << ans << endl;
}