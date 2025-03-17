#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int primeCount(int a)
{
    int count = 0;
    vector<bool> isPrime(a + 1, true);

    for (int i = 2; i < a; i++)
    {
        if (isPrime[i])
        {
            count++;
            for (int j = i * 2; j < a; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    return count;
}
int main()
{
    // TODO   Sieve Of Eratosthenes
    int a, b;
    cout << "Enter range: ";
    cin >> a;

    cout << primeCount(a) << endl;
}