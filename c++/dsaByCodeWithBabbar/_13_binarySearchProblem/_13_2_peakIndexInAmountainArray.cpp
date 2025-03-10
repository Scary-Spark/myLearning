// TODO  https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &nums)
{
    int start = 0,
        end = nums.size() - 1,
        mid;

    while (start <= mid)
    {
        mid = start + (end - start) / 2;

        if (nums.at(mid - 1) < nums.at(mid) && nums.at(mid) > nums.at(mid + 1))
            return mid;

        if (nums.at(mid) < nums.at(mid + 1))
        {
            start = mid + 1;
        }
        else
        {
            end = mid; // if mid-1 then it will pass wrong value
        }
    }
    return -1;
}
int main()
{
    int size;
    cin >> size;
    vector<int> nums;
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    cout << peakIndexInMountainArray(nums) << endl;
}