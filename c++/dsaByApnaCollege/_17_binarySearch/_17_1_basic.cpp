#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> nums, int n)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (nums.at(mid) > n)
        {
            end = --mid;
        }
        else if (nums.at(mid) < n)
        {
            start = ++mid;
        }
        else
        {
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> numsOdd = {-1, 0, 3, 4, 5, 9, 12};
    int searchElement = 12;
    int result = binarySearch(numsOdd, searchElement);
    cout << "Ans: " << result << endl;

    vector<int> numsEven = {-1, 0, 3, 4, 5, 12};
    searchElement = 12;
    result = binarySearch(numsEven, searchElement);
    cout << "Ans: " << result << endl;
}