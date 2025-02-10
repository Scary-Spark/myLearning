#include <iostream>
using namespace std;
int findProfit(int buns, int beefs, int chickens, int hamPrice, int chiPrice)
{
    if (buns < 2)
        return 0;
    int profit = 0;
    while (chickens > 0)
    {
        if (buns < 2)
            return profit;
        profit += chiPrice;
        chickens--;
        buns -= 2;
    }
    while (beefs > 0)
    {
        if (buns < 2)
            return profit;
        profit += hamPrice;
        beefs--;
        buns -= 2;
    }

    return profit;
}

int main()
{
    int testCase;
    cin >> testCase;
    int buns, beefs, chickens, hamPrice, chiPrice;
    for (int i = 1; i <= testCase; i++)
    {
        cin >> buns >> beefs >> chickens;
        cin >> hamPrice >> chiPrice;
        int profit1 = findProfit(buns, beefs, chickens, hamPrice, chiPrice);
        int profit2 = findProfit(buns, beefs, chickens, chiPrice, hamPrice);
        cout << max(profit1, profit2) << endl;
    }
}