#include <iostream>
#include <vector>
using namespace std;
int findIndex(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums.at(mid) == target)
            return mid;
        if (nums.at(start) <= nums.at(mid))
        {
            if (nums.at(start) <= target && target <= nums.at(mid))
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (nums.at(mid) <= target && target <= nums.at(end))
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    /*
            TODO    remember:
                     for rotated sorted array 1 half always be sorted
                     i.e if left sorted then (start<mid)
                     i.e if right sorted then (mid<end)

     */
    vector<int> nums = {3, 4, 5, 6, 7, 0, 1, 2};
    cout << findIndex(nums, 0) << endl;
}