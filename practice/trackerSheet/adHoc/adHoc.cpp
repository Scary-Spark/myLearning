#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int findMinimum(int n, int x, int y, int d)
{
    int count = 0, temp = x;
    while (temp != y || temp > y)
    {
        }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, d;
        cin >> n >> x >> y >> d;
        cout << findMinimum(n, x, y, d) << endl;
    }
}