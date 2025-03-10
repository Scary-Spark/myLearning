#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
bool isValid(vector<int> &nums, int cows, int minAllowedDistance)
{
    int cowCount = 1;
    int lastPos = nums.at(0);

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums.at(i) - lastPos >= minAllowedDistance)
        {
            cowCount++;
            lastPos = nums.at(i);
        }

        if (cows == cowCount)
            return true;
    }

    return false;
}
int findMinDistance(vector<int> &nums, int cows)
{
    int maxValue = INT_MIN, minValue = INT_MAX;
    sort(nums.begin(), nums.end());

    for (int i : nums)
    {
        maxValue = max(maxValue, i);
        minValue = min(minValue, i);
    }

    int start = 1;
    int end = maxValue - minValue;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isValid(nums, cows, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    // 1 2 8 4 6 ans is 3
    int size;
    cout << "Enter the size: ";
    cin >> size;
    vector<int> nums;
    cout << "Enter the element: ";
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }
    int cows;
    cout << "Number of cows: ";
    cin >> cows;

    cout << findMinDistance(nums, cows) << endl;
}