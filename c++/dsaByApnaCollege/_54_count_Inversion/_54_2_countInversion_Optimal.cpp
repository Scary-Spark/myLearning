#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start;
    int j = mid + 1;
    int invCount = 0;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
            invCount += (mid - i + 1);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= end)
    {
        temp.push_back(arr[j++]);
        invCount += (mid - i + 1);
    }
    for (int index = 0; index < temp.size(); index++)
    {
        arr[index + start] = temp.at(index);
    }
    return invCount;
}
int mergeSort(vector<int> &temp, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        int leftInverion = mergeSort(temp, start, mid);
        int rightInversion = mergeSort(temp, mid + 1, end);

        int inversion = merge(temp, start, mid, end);

        return leftInverion + rightInversion + inversion;
    }
    return 0;
}
int main()
{
    // using merge sort

    vector<int> arr = {1, 3, 5, 10, 2, 6, 8, 9};
    cout << mergeSort(arr, 0, arr.size() - 1) << endl;
}