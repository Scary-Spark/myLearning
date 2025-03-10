#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int findSingle(vector<int> a)
{
    int start = 0;
    int n = a.size();
    int end = n - 1;
    if (n == 1)
    {
        return a.at(0);
    }
    if (a.at(0) != a.at(1))
        return a.at(0);
    if (a.at(n - 1) != a.at(n - 2))
        return a.at(n - 1);

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if ((a.at(mid) != a.at(mid - 1)) && (a.at(mid) != a.at(mid + 1)))
        {
            return a.at(mid);
        }

        if (mid % 2 == 0)
        {
            if (a.at(mid) == a.at(mid - 1))
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if (a.at(mid) == a.at(mid - 1))
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<int> nums;
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    cout << findSingle(nums) << endl;
}