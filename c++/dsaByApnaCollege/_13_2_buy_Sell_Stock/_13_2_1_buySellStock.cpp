#include <iostream>
#include <vector>
using namespace std;
int findBestBuy(vector<int> price)
{
    int maxProfit = 0;
    int buy = price.at(0);

    for (int i = 1; i < price.size(); i++)
    {
        if (buy < price.at(i))
        {
            maxProfit = max(maxProfit, price.at(i) - buy);
        }
        buy = min(buy, price[i]);
    }
    return maxProfit;
}
int main()
{
    vector<int> price = {7, 1, 5, 3, 6, 4};
    int ans = findBestBuy(price);
    cout << "Highest Profit: " << ans << endl;
}