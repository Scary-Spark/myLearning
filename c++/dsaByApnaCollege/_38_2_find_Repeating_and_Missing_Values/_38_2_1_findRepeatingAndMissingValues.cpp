// TODO leetCode 2965

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findMissingAndRepeatedValues(vector<vector<int>> &nums)
{
}
int main()
{
    vector<vector<int>> nums = {
        {9, 1, 7},
        {8, 9, 2},
        {3, 1, 6}};

    vector<int> ans = findMissingAndRepeatedValues(nums);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}