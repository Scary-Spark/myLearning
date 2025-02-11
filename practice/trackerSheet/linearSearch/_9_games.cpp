// TODO  https://vjudge.net/contest/575132#problem/C

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int totalTeams;
    cin >> totalTeams;
    vector<int> nums;
    int count = 0;
    totalTeams *= 2;
    for (int i = 1; i <= totalTeams; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }
    for (int i = 0; i < nums.size(); i = i + 2)
    {
        int x1 = nums.at(i);
        int y1 = nums.at(i + 1);
        for (int j = i + 2; j < nums.size(); j = j + 2)
        {
            int x2 = nums.at(j);
            int y2 = nums.at(j + 1);
            if (x1 == y2)
                count++;
            if (y1 == x2)
                count++;
        }
    }
    cout << count << endl;
}