#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minimumElements(vector<int> &coins, int amount)
{
    // Write your code here.
    sort(coins.rbegin(), coins.rend());

    int tt = amount;
    int i = 0;
    int count = 0;
    while (tt > 0 && i < coins.size())
    {
        if (tt < coins.at(i))
        {
            i++;
            continue;
        }
        int temp = tt / coins.at(i);
        count += temp;
        tt = tt - (coins.at(i) * temp);
        i++;
    }
    if (tt == 0)
        return count;
    return -1;
}
int main()
{
    int testCase;
    cin >> testCase;
    for (int i = 1; i <= testCase; i++)
    {
        vector<int> coins;
        int amount, n;
        cin >> n >> amount;
        while (n--)
        {
            int t;
            cin >> t;
            coins.push_back(t);
        }

        cout << "Case " << i << ": " << minimumElements(coins, amount) << endl;
    }
}