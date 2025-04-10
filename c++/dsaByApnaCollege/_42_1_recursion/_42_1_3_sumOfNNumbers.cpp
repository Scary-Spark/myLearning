#include <iostream>
using namespace std;
int sumOfNums(int n)
{
    if (n == 1)
        return 1;
    return n + sumOfNums(n - 1);
}
int main()
{
    int n = 4;
    cout << sumOfNums(n) << endl;
}