#include <iostream>
using namespace std;
int main()
{
    // TODO    prime number
    int n;
    cin >> n;
    bool prime = true;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (!prime)
    {
        cout << "Not a prime number\n";
    }
    else
        cout << "Is a prime number\n";
}
