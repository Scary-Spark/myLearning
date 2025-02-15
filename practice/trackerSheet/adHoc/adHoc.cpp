#include <iostream>
using namespace std;
int findClick(int n, int x, int y, int d)
{
    int temp = x;
    int count1 = 0, count2 = 0;
    int cycleCount = 1;
    bool found = false;
    while (1)
    {
        if (temp <= 1 || temp >= n)
            cycleCount++;
        if (cycleCount >= 4)
            break;
        if (cycleCount % 2 != 0)
        {
            temp += d;
        }
        else if (cycleCount % 2 == 0)
            temp -= d;

        if (temp <= 1)
        {
            temp = 1;
        }
        else if (temp >= 1)
        {
            temp = n;
        }
        count1++;
    }
    return count1;
}
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase > 0)
    {
        int n, x, y, d;
        cin >> n >> x >> y >> d;
        cout << findClick(n, x, y, d) << endl;
        testCase--;
    }
}