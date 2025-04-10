// TODO leetcode 1

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
pair<int, int> findAns(vector<int> &nums, int target)
{
    unordered_map<int, int> m;
    pair<int, int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        int first = nums.at(i);
        int second = target - first;

        if (m.find(second) != m.end())
        {
            return {i, m[second]};
        }
        m[first] = i;
    }
    return {-1, -1};
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 17;
    pair<int, int> ans = findAns(nums, target);
    cout << ans.first << " " << ans.second << endl;
}