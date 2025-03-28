// leetcode 88
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // mainly compare the last index (as both of them are max)
    vector<int> a = {1, 2, 3, 0, 0, 0};
    vector<int> b = {2, 3, 5};
    int m = 3, n = 3;
    int index = m + n - 1;
    int i = m - 1;
    int j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (a[i] >= b[j])
        {
            a[index] = a[i];
            i--;
            index--;
        }
        else
        {
            a[index--] = b[j--];
        }
    }

    while (j >= 0)
    {
        /*
            a = {4,5,6,0,0,0};
            b = {1,2,3};
        */
        a[index--] = b[j--];
    }

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
}