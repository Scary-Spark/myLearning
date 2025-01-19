#include <iostream>
#include <vector>
using namespace std;
int findMejority(vector<int> nums)
{
    int ans, count = 0;
    for (int i : nums)
    {
        count = 0;
        for (int j : nums)
        {
            if (i == j)
            {
                count++;
            }
        }
        if (count > nums.size() / 2)
            return i;
    }
    return -1;
}
int main()
{
    /*
        TODO    Majority element is that element that appears more than n/2 time in a arrat
            !   here n is the size of the array
    */

    vector<int> nums = {1, 2, 2, 1, 1, 2, 1, 2, 2, 1, 1, 2, 2};
    cout << "Majority element is: " << findMejority(nums);
}