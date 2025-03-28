// leetcode 75, sort color etc
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void sortNums(vector<int> &nums)
{
    //! use just a single loop
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