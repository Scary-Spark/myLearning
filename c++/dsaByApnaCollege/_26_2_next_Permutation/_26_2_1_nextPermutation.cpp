#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void findPermutation(vector<int> &a)
{
    int pivot = -1;
    int n = a.size();

    // find pivot
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            pivot = i;
            break;
        }
    }
    if (pivot == -1)
    {
        // a = {5,4,3,2,1}
        reverse(a.begin(), a.end());
        return;
    }

    // find next larger element
    for (int i = n - 1; i > pivot; i--)
    {
        if (a[i] > a[pivot])
        {
            swap(a[i], a[pivot]);
            break;
        }
    }

    int i = pivot + 1, j = n - 1;
    while (i <= j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}
int main()
{
    // permutation means order
    /*
        Lexicogrphically:
            a = {1,2,3}
             = 1 2 3
             = 1 3 2    (132 > 123)
             = 2 1 3    (213 > 132)
             = 2 3 1    so on......
             = 3 1 2
             = 3 2 1

        pivot element:
            here pivot is that element where a[i] < a[i+1] and from a[i+1] elements are sorted in descending order
            like:
                a = {1,2,3,6,5,4}
                here pivot is 3

        approach:
            1. find the pivot element
            2. find the right most of the pivot element
            3. swap right most and the pivot
            4. reverse (pivot+1) to (n-1)
    */
    vector<int> a = {1, 2, 4, 5, 3};
    findPermutation(a);

    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
}