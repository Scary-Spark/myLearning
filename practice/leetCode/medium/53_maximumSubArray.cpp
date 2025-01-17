#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int sum(vector<int> &nums)
{
    int maxSum = INT_MIN, currentSum = 0;
    for (int i : nums)
    {
        currentSum += i;
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
            currentSum = 0;
    }
    return maxSum;
}
int main()
{
    vector<int> nums;
    int size;
    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    int ans = sum(nums);
    cout << "Maximum subarray sum is: " << ans << endl;
}