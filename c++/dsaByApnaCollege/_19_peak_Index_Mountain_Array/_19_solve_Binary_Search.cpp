// TODO  leetCode 852

#include <iostream>
#include <vector>

using namespace std;

int findPeak(vector<int> nums)
{
    int start = 1;
    int end = nums.size() - 2;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if ((nums.at(mid - 1) < nums.at(mid)) && (nums.at(mid) > nums.at(mid + 1)))
        {
            return mid;
        }
        else if (nums.at(mid - 1) < nums.at(mid))
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {0, 3, 8, 9, 5, 2};
    /*
            here, 1st half is ascending order (0,3,8)
            rest half is descending order (9,5,2)
            so binary search can be applied

            for peak value a[p-1] < a[p] >a[p+1]

            note: if index 0 or index n-1 is max that can't be a mountain
    */
    cout << findPeak(nums) << endl;
}