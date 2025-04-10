#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int> nums, int n)
{
    if (n == 0 || n == 1)
        return true;
    return nums.at(n - 1) >= nums.at(n - 2) && isSorted(nums, n - 1);
}
int main()
{
    vector<int> nums = {1, 2, 8, 4, 5};
    isSorted(nums, nums.size()) ? cout << "Array is soted\n" : cout << "Array is not sorted\n";
}