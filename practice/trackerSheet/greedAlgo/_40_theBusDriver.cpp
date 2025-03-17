// TODO https://vjudge.net/contest/575138#problem/C
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int findMinCoast(int n, int d, int r, vector<int> morning, vector<int> evening)
{
    sort(morning.begin(), morning.end());
    sort(evening.rbegin(), evening.rend());

    int coast = 0;
    for (int i = 0; i < n; i++)
    {
        if (morning.at(i) + evening.at(i) > d)
        {
            int dif = (morning.at(i) + evening.at(i)) - d;
            coast += (dif * r);
        }
    }
    return coast;
}
int main()
{
    int n, d, r;
    while (cin >> n >> d >> r)
    {
        if (n == 0 && d == 0 && r == 0)
            break;

        vector<int> morning;
        vector<int> evening;

        for (int i = 0; i < n; i++)
        {
            int n;
            cin >> n;
            morning.push_back(n);
        }
        for (int i = 0; i < n; i++)
        {
            int n;
            cin >> n;
            evening.push_back(n);
        }

        cout << findMinCoast(n, d, r, morning, evening) << endl;
    }
}