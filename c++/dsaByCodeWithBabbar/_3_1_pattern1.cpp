#include <iostream>
using namespace std;
int main()
{
    /*
        TODO pattern 1
        * * * *
        * * * *
        * * * *
        * * * *
    */

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;

    /*
        1 1 1 1
        2 2 2 2
        3 3 3 3
        4 4 4 4
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    /*
        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    /*
        1 2 3 4
        5 6 7 8
        9 10 11 12
        13 14 15 16
    */
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    cout << endl;

    /*
        A A A A
        B B B B
        C C C C
        D D D D
    */
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    cout << endl;

    /*
        A B C D
        A B C D
        A B C D
        A B C D
    */
    ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        ch = 'A';
        cout << endl;
    }
}