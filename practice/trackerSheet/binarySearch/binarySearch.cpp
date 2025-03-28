#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int findTotal(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());

    int start = 0, end = nums.at(nums.size() - 1);
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isVaid(nums, mid, k))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << findTotal(nums, k) << endl;
}