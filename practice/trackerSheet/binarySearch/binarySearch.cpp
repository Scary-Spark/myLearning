#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int findMinK(vector<int> nums, int k)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    return 0;
}
int main()
{
    int testCase;
    cin >> testCase;
    for (int i = 1; i <= testCase; i++)
    {
        int ans;
        int size;
        cin >> size;
        vector<int> nums;
        int n;
        cin >> n;
        nums.push_back(n);
        int maxK = INT_MIN;
        for (int i = 1; i < size; i++)
        {
            cin >> n;
            nums.push_back(n);
            maxK = max(maxK, nums.at(i) - nums.at(i - 1));
        }
        ans = findMinK(nums, maxK);
        cout << "Case " << i << ": " << maxK << endl;
    }
}