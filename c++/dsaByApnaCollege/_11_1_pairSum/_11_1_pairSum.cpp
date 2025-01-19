#include <iostream>
#include <vector>
using namespace std;
vector<int> findPosition(vector<int> nums, int target)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums.at(i) + nums.at(j) == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    ans.push_back(-1);
    return ans;
}
int main()
{
    // TODO pair sum the sum of h for 2 elements in a sorted array
    //! Brute force approach
    vector<int> nums;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int r;
        cin >> r;
        nums.push_back(r);
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    vector<int> ans = findPosition(nums, target);
    if (ans.front() == -1)
    {
        cout << "Not such elements are found!";
    }
    else
    {
        cout << "Index: ";
        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}