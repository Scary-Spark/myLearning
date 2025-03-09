#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMejority(vector<int> nums)
{
    int frequency = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (frequency == 0)
            ans = nums[i];
        if (ans == nums[i])
        {
            frequency++;
        }
        else
        {
            frequency--;
        }
    }
    // TODO      this is the solve (if it always have majority element. but doesn't have then we have to add this)

    int count = 0;
    for (int i : nums)
    {
        if (ans == i)
            count++;
    }
    if (count > nums.size() / 2)
        return ans;
    else
        return -1;
}
int main()
{
    /*
        TODO    Majority element is that element that appears more than n/2 time in a arrat
            !   here n is the size of the array
    */

    vector<int> nums = {3, 3, 1, 1, 3, 1, 2, 3, 3, 1, 3, 3, 2, 3, 1, 3};
    cout << "Majority element is: " << findMejority(nums) << endl;

    vector<int> nums2 = {3, 2, 3};
    cout << "Majority element is: " << findMejority(nums2) << endl;
}