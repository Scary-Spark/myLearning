#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void merge(int arr[], int s, int m, int e)
{
    // for left sub array
    int length1 = m - s + 1;       // as start index is 0;  like for mid =4    4-0=4+1=5
    int *first = new int[length1]; // same as first[length1];

    // for right sun array
    int length2 = e - m;
    int *second = new int[length2];

    int mainArrayIndex = s;
    for (int i = 0; i < length1; i++)
    {
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = m + 1;
    for (int i = 0; i < length2; i++)
    {
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // merge first and second
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while (index1 < length1 && index2 < length2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index1++];
        }
    }

    while (index1 < index2)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < index1)
    {
        arr[mainArrayIndex++] = second[index1++];
    }
}
void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int m = s + (e - s) / 2;
    // for left sub array:
    mergeSort(arr, s, m);

    // for right sub array
    mergeSort(arr, m + 1, e);

    // merge the sorted part
    merge(arr, s, m, e);
}
int main()
{
    // using new created array

    int arr[] = {2, 5, 1, 6, 9};
    int n = 5;

    mergeSort(arr, 0, n - 1); // send start and end
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << " yy" << endl;
    cout << endl;
    return 0;
}