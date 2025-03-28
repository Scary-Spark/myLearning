// leetcode 75, sort color etc
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void sortNums(vector<int> &nums)
{
    // time complexity : O(n)
    int count0 = 0, count1 = 0, count2 = 0;
    for (auto i : nums)
    {
        if (i == 0)
            count0++;
        else if (i == 1)
            count1++;
        else
            count2++;
    }

    int index = 0;
    for (int i = 0; i < count0; i++)
    {
        nums.at(index) = 0;
        index++;
    }
    for (int i = 0; i < count1; i++)
    {
        nums.at(index) = 1;
        index++;
    }
    for (int i = 0; i < count2; i++)
    {
        nums.at(index) = 2;
        index++;
    }
}
int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    sortNums(nums);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}