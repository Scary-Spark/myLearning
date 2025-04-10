#include <iostream>
#include <vector>
using namespace std;
bool binarySearch(vector<int> nums, int start, int end, int target)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target = nums.at(mid))
            return true;

        if (nums.at(mid) > target)
            return binarySearch(nums, start, mid - 1, target);
        else
            return binarySearch(nums, mid + 1, end, target);
    }

    return false;
}
int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = -1;
    binarySearch(nums, 0, nums.size() - 1, target) ? cout << "Target found\n" : cout << "Target not found\n";
}