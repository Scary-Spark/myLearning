// TODO leetcode 240
#include <iostream>
#include <vector>
using namespace std;
bool findTarget(vector<vector<int>> nums, int target)
{
    int r = nums.size();
    int c = nums[0].size();

    int start = 0;
    int end = c - 1;

    while (start < r && end >= 0)
    {
        if (target == nums[start][end])
        {
            return true;
        }
        else if (target > nums[start][end])
        {
            start++;
        }
        else
            end--;
    }
    return false;
}
int main()
{
    vector<vector<int>> nums = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};

    int target = 5;
    cout << findTarget(nums, target) << endl;
}