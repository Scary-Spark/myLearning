#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        vector<char> s;
        for (int j = 0; j < n; j++)
        {
            char ch;
            cin >> ch;
            s.push_back(n);
        }
        int sCount = 0;
        for (int j = 0; j < s.size(); j += 3)
        {
            if (s.at(j) == '.' || s.at(j + 1) == '.' || s.at(j + 2) == '.')
            {
                sCount++;
            }
        }
        cout << "Case " << i << ": " << sCount << endl;
    }
}