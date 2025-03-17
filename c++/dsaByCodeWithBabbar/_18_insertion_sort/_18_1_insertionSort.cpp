#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // for bubble sort first will run n-1 times;

    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    int n = 7;

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];

        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > current)
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = current;
    }

    cout << "Sorted array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}