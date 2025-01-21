#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> findPosition(vector<int> nums, int target)
{
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1, pairSum = 0;
    vector<int> ans;
    while (i < j)
    {
        pairSum = nums.at(i) + nums.at(j);
        if (pairSum == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
    }
}
int main()
{
    // TODO  pairSum optimal approach
    //! Only for sorted array
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> ans = findPosition(nums, target);
    cout << "Index: ";
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}