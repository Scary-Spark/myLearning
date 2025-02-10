#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findBooksPrices(vector<int> prices)
{
    sort(prices.begin(), prices.end());
    int i = 0;
    int j = prices.size() - 1;
    for (int i = 0; i < prices.size(); i++)
    {
    }
}
int main()
{
    int testCase, n;
    while (1)
    {
        vector<int> prices;
        cin >> testCase;
        for (int i = 1; i <= testCase; i++)
        {
            cin >> n;
            prices.push_back(n);
        }
        vector<int> ans = findBooksPrices(prices);
    }
}