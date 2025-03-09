#include <iostream>
using namespace std;
int main()
{
    // TODO    fibonacci series
    /*
        0 1 1 2 3 5 8 13 21 . . . . .
    */

    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < 10; i++)
    {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
}
