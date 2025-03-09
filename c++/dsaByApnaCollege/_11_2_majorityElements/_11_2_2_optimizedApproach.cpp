#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMejority(vector<int> nums)
{
    sort(nums.begin(), nums.end()); //? O(NlogN)
    int frequency = 1, ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            frequency++;
        }
        else
        {
            frequency = 1;
            ans = nums[i];
        }
        if (frequency > nums.size() / 2)
            return ans;
    }
}
int main()
{
    /*
        TODO    Majority element is that element that appears more than n/2 time in a arrat
            !   here n is the size of the array
    */

    vector<int> nums = {3, 3, 1, 1, 3, 1, 2, 3, 3, 1, 3, 3, 2, 3, 1, 3};
    cout << "Majority element is: " << findMejority(nums);
}