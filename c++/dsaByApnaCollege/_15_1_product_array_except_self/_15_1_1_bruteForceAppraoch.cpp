#include <iostream>
#include <vector>
using namespace std;
vector<int> findProduct(vector<int> nums)
{
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        int temp = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j)
            {
                temp *= nums.at(j);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = findProduct(nums);
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}