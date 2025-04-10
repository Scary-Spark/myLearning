// TODO leetcode 74
#include <iostream>
#include <vector>
using namespace std;
bool searchInRow(vector<vector<int>> nums, int target, int row)
{
    int r = nums.size();
    int c = nums[0].size();

    int start = 0, end = c - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == nums[row][mid])
        {
            return true;
        }
        if (target > nums[row][mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
bool findTarget(vector<vector<int>> nums, int target)
{
    int r = nums.size();
    int c = nums[0].size();

    int startRow = 0, endRow = r - 1;
    while (startRow <= endRow)
    {
        int midRow = startRow + (endRow - startRow) / 2;
        if (target >= nums[midRow][0] && target <= nums[midRow][c - 1])
        {
            return searchInRow(nums, target, midRow);
        }
        else if (target >= nums[midRow][c - 1])
        {
            startRow = midRow + 1;
        }
        else
        {
            endRow = midRow - 1;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> nums = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    cout << findTarget(nums, target) << endl;
}