// TODO  https://vjudge.net/contest/575136#problem/A
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
bool isValid(vector<int> &nums, int k)
{
    int tempK = k;
    int lastPosition = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (k < nums.at(i) - lastPosition)
        {
            return false;
        }

        if (k == nums.at(i) - lastPosition)
        {
            k--;
        }

        lastPosition = nums.at(i);
    }
    return true;
}
int findMink(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    int start = 0;
    int end = nums.at(nums.size() - 1);

    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isValid(nums, mid))
        { // k==mid
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        vector<int> nums;

        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int r;
            cin >> r;
            nums.push_back(r);
        }
        cout << "Case " << i << ": " << findMink(nums) << endl;
    }
}