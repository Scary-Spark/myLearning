#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // inversion is the pair of array wher i<j && a[i]>a[j]
    int arr[] = {6, 3, 5, 2, 7};

    int count = 0;
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
}