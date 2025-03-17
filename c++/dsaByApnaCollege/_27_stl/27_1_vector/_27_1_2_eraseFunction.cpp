#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {2, 4, 6, 7, 8, 1, 4, 7, 4};
    cout << "Dataset: ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;

    // erase first element
    nums.erase(nums.begin());
    cout << "After erase: ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;

    // erase ith index:
    nums.erase(nums.begin() + 2);
    cout << "After erase 3rd index: ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;

    // delete some elents:
    nums.erase(nums.begin() + 2, nums.begin() + 4);
    cout << "Remove 2 to 4: ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}