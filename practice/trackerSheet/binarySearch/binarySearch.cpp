#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void findSum(vector<int> prices, int total)
{
    sort(prices.begin(), prices.end());
    int start = 0,
        end = prices.size() - 1;

    int p1, p2;

    while (start <= end)
    {
        int sum = prices.at(start) + prices.at(end);

        if (sum == total)
        {
            int p1 = prices.at(start);
            int p2 = prices.at(end);
            if (start + 1 <= end - 1)
            {
                start++;
                end--;
            }
            else
                break;
        }
        else if (sum > total)
        {
            end--;
        }
        else if (sum < total)
        {
            start++;
        }
    }
    cout << "Peter should buy books whose prices are " << p1 << " and " << p2 << ".\n"
         << endl;
}
int main()
{

    while (1)
    {
        int total;
        cin >> total;
        vector<int> prices;
        for (int i = 0; i < total; i++)
        {
            int n;
            cin >> n;
            prices.push_back(n);
        }
        int sumPrice;
        cin >> sumPrice;

        findSum(prices, sumPrice);
    }
}