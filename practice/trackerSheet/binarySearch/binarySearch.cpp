#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findPoint(vector<int> nums, int lp, int up)
{
    int ans;

    int start = 1;
    int end = nums.size() - 1;
    int mid = end + (end - start) / 2;

    while (start <= end)
    {
        if (nums.at(start - 1) <= lp && lp <= nums.at(start))
        {
        }
    }
}
int main()
{
    int testCase;
    cin >> testCase;
    for (int i = 1; i <= testCase; i++)
    {
        int a, b;
        cin >> a >> b;
        vector<int> nums;

        for (int j = 0; j < a; j++)
        {
            int n;
            cin >> n;
            nums.push_back(n);
        }

        for (int j = 0; j < b; j++)
        {
            int lowerPoint, upperPoint;
            cin >> lowerPoint >> upperPoint;
            cout << "Case " << i << ":" << endl
                 << findPoint(nums, lowerPoint, upperPoint) << endl;
        }
    }
}