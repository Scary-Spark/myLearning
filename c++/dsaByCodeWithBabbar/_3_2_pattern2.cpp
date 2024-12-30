#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    /*
     *
     * *
     * * *
     * * * *
     */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;

    /*
        1
        2 2
        3 3 3
        4 4 4 4
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (i + 1) << " ";
        }
        cout << endl;
    }
    cout << endl;

    /*
        1
        2 1
        3 2 1
        4 3 2 1
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}