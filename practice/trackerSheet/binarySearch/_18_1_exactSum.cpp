// TODO https://vjudge.net/contest/575136#problem/C
// TODO Using two Pointer method
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> findPrice(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;
    sort(nums.begin(), nums.end());
    vector<int> ans;
    while (start < end)
    {
        if (nums.at(start) + nums.at(end) == target)
        {
            ans.clear();
            ans.push_back(nums.at(start));
            ans.push_back(nums.at(end));
            start++;
            end--;
        }
        else if (nums.at(start) + nums.at(end) > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return ans;
}
int main()
{
    int t;
    while (cin >> t)
    {
        vector<int> nums;
        int target;
        for (int i = 0; i < t; i++)
        {
            int n;
            cin >> n;
            nums.push_back(n);
        }
        cin >> target;
        vector<int> ans = findPrice(nums, target);
        cout << "Peter should buy books whose prices are " << ans.at(0) << " and " << ans.at(1) << ".\n\n";
    }
}