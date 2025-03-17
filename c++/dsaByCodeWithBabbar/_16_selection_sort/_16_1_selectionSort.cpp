#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // find the smallest element. replace with first index then index++

    int arr[] = {64, 25, 22, 12, 11};
    int n = 5;

    for (int i = 0; i < (n - 1); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout << "Sorted array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}