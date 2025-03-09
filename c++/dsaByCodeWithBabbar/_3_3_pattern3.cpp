#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    /*
        |       *
        |     * *
        |   * * *
        | * * * *
    */
    int temp;
    for (int i = 1; i <= n; i++)
    {
        temp = n - i;
        for (int j = 1; j <= n; j++)
        {
            if (temp > 0)
                cout << " " << " ";
            else
                cout << "* ";
            temp--;
        }
        cout << endl;
    }
    cout << endl;

    /*
     * * * *
     * * *
     * *
     *
     */
    temp = n;
    for (int i = 1; i <= n; i++)
    {
        temp = n - i + 1;
        for (int j = 1; j <= n; j++)
        {
            if (temp > 0)
                cout << "* ";
            temp--;
        }
        cout << endl;
    }
    cout << endl;

    /*
        |* * * *
        |  * * *
        |    * *
        |      *
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || (i < j))
                cout << "* ";

            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}