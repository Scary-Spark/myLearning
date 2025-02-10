// TODO  https://vjudge.net/contest/575128#problem/B

#include <iostream>
#include <vector>
using namespace std;
vector<int> findVec(long long s)
{
    vector<int> nums;
    while (s >= 1) // 19891
    {
        int x = s % 10;
        nums.push_back(x);
        s /= 10;
    }
    return nums;
}
string findPal(vector<int> nums)
{
    int i = 0;
    int j = nums.size() - 1;
    while (i < j) //
    {
        int start = nums.at(i);
        int end = nums.at(j);
        if (start != end)
        {
            return "No";
        }
        i++;
        j--;
    }
    return "Yes";
}
int main()
{
    int n;
    long long int s;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        vector<int> nums = findVec(s);
        cout << "Case " << i << ": " << findPal(nums) << endl;
    }
}