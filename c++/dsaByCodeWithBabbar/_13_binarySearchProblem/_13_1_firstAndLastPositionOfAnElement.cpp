// TODO https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?interviewProblemRedirection=true&search=first%20an%20dlas

#include <iostream>
#include <vector>
using namespace std;
vector<int> findIndex(vector<int> nums, int k)
{
    int start = 0,
        end = nums.size() - 1;

    vector<int> index(2, -1);
    int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums.at(mid) < k)
        {
            start = mid + 1;
        }
        else if (nums.at(mid) > k)
        {
            end = mid - 1;
        }
        else
        {
            index.at(0) = mid;
            index.at(1) = mid;
            end = mid - 1;
        }
    }

    if (index.at(0) == -1)
    {
        return index;
    }

    start = mid + 1;
    end = nums.size() - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums.at(mid) == k)
        {
            index.at(1) = mid;
            start = mid + 1;
        }
        if (nums.at(mid) < k)
        {
            start = mid + 1;
        }
        else if (nums.at(mid) > k)
        {
            end = mid - 1;
        }
    }
    return index;
}
int main()
{
    int size;
    int k;
    cin >> size;
    vector<int> nums;
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }
    cin >> k;

    vector<int> index = findIndex(nums, k);

    for (int i : index)
    {
        cout << i << " ";
    }
    cout << endl;
}