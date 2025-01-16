#include <iostream>
using namespace std;
int main()
{
    int first = -1, last = -1;
    int r, n;
    cin >> r;
    cin >> n;
    int arr[r];
    for (int i = 0; i < r; i++)
    {
        cin >> arr[i];
        if (arr[i] == n)
        {
            if (first == -1)
            {
                first = i;
                last = i;
            }
            else
                last = i;
        }
    }
    cout << first << " " << last << endl;
}