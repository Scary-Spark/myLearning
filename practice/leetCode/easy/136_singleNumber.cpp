#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size, n;
    vector<int> nums;
    cout << "Enter size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        nums.push_back(n);
    }

    int ans = 0;
    for (int i : nums)
    {
        ans ^= i;
    }
    cout << ans << endl;
}