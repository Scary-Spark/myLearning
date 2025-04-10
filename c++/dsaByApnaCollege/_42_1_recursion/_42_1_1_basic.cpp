#include <iostream>
using namespace std;
void recursiveCall(int n)
{
    if (n < 1)
    {
        cout << endl;
        return;
    }
    cout << n << " ";
    recursiveCall(--n);
    cout << "hlw bro, when n = " << n << endl;
}
int main()
{
    int n = 4;
    recursiveCall(4);
}