#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {2, 4, 6, 7, 8, 1, 4, 7, 4};

    cout << "Nums: ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;

    // inset elemnt at i-it index:
    nums.insert(nums.begin() + 2, 99); // 3rd index, then value
    cout << "After insertion of 99 at index 2: ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}