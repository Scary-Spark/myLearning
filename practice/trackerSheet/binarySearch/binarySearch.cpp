#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int findPosition(vector<int> nums, int a, int b)
{
    int start = 0, end = nums.size() - 1;
    int lowerBound, upperBound;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums.at(mid) == a)
        {
            lowerBound = mid;
            break;
        }

        if (a > nums.at(mid - 1) && a < nums.at(mid))

            if (a < nums.at(mid))
            {
                end = mid - 1;
            }
            else if (a > nums.at(mid))
            {
                start = mid + 1;
            }
    }

    return -1;
}
int main()
{
    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        int size, segments;
        vector<int> nums;
        cin >> size >> segments;
        for (int j = 0; j < size; j++)
        {
            int n;
            cin >> n;
            nums.push_back(n);
        }

        bool first = true;

        for (int j = 0; j < segments; j++)
        {
            int a, b;
            cin >> a >> b;
            if (first)
            {
                cout << "Case " << i << ": " << endl;
                first = false;
            }
            cout << findPosition(nums, a, b) << endl;
        }
    }
}