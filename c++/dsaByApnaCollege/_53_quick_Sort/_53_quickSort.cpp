#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{
    int index = start - 1, pivot = arr[end];

    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            index++;
            swap(arr[j], arr[index]);
        }
    }

    index++;
    swap(arr[end], arr[index]);
    return index;
}
void quickSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(arr, start, end);

        // for left side
        quickSort(arr, start, pivotIndex - 1);

        // for right side
        quickSort(arr, pivotIndex + 1, end);
    }
}
int main()
{
    /*
        pick up a pivot. (better to pick last index)
        for pivot(for ascending order):
            1. leftSide<pivot
            2. rightSide>pivot
    */
    vector<int> arr = {12, 31, 25, 8, 32, 17};
    quickSort(arr, 0, arr.size() - 1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}