// TODO  https://vjudge.net/contest/575132#problem/D

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int j, k;
    cin >> j >> k;
    vector<int> nums;
    int zeroCount = 0;
    for (int i = 0; i < j; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }
    int temp = nums.at(k - 1);
    int count = 0;
    for (int i : nums)
    {
        if (i >= temp && i > 0)
            count++;
    }

    cout << count << endl;
}