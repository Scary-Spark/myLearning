// todo https://vjudge.net/contest/575138#problem/B
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int totalCase;
    cin >> totalCase;
    for (int i = 1; i <= totalCase; i++)
    {
        int n;
        cin >> n;
        vector<int> ch;
        for (int j = 0; j < n; j++)
        {
            char s;
            cin >> s;
            ch.push_back(s);
        }

        int j = 0;
        int count = 0;
        while (j < n)
        {
            if (ch.at(j) == '.')
            {
                j += 3;
                count++;
            }
            else
            {
                j++;
            }
        }

        cout << "Case " << i << ": " << count << endl;
    }
}