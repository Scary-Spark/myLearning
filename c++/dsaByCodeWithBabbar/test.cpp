#include <iostream>
using namespace std;
int factorial(int n)
{
    int temp = 1;
    for (int i = 0; i < n; i++)
    {
        temp *= (n - i);
    }
    return temp;
}
int findnCr(int n, int r)
{
    int n1 = factorial(n);
    int r1 = factorial(r);
    int n2 = factorial(n - 2);

    return (double)(n1 / (n2 * r1));
}
int main()
{
    int n, r;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of r: ";
    cin >> r;
    double result = findnCr(n, r);
    cout << result << endl;
}