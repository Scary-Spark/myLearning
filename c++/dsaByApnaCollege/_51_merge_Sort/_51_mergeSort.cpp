#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int index = 0; index < temp.size(); index++)
    {
        arr[index + start] = temp.at(index);
    }
}
void mergeSort(int arr[], int start, int end)
{

    if (start < end)
    {
        int mid = start + (end - start) / 2;

        // For left sub array
        mergeSort(arr, start, mid);

        // for right sub array
        mergeSort(arr, mid + 1, end);

        // merge the sorted array
        merge(arr, start, mid, end);
    }
}
int main()
{
    int arr[] = {12, 31, 35, 8, 32, 17};
    int n = 6;

    mergeSort(arr, 0, n - 1);
    cout << "Sorted Array: " << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}