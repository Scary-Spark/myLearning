#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // for bubble sort first will run n-1 times;

    int arr[] = {64, 25, 22, 12, 11};
    int n = 5;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}