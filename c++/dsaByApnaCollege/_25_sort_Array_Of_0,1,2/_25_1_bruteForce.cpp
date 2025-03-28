// leetcode 75, sort color etc
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void sortBrute(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums.at(i) > nums.at(j))
            {
                swap(nums.at(i), nums.at(j));
            }
        }
    }
}
int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    sortBrute(nums);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}