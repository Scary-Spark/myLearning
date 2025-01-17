#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int currentSum = 0, maxSum = 0;
    int arr[] = {1, 2, 3, 4, 5};
    for (int start = 0; start < 5; start++)
    {
        currentSum = 0;
        for (int end = start; end < 5; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "Maximum sub array sum is: " << maxSum << endl;
}