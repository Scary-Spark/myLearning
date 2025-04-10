#include <iostream>
#include <vector>
using namespace std;
int findFibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;

    return findFibonacci(n - 1) + findFibonacci(n - 2);
}
int main()
{
    int n = 6;
    int nums = findFibonacci(n);
    cout << nums << endl;
}