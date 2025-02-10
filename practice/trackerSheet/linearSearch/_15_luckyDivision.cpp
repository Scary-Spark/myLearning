// TODO  https://vjudge.net/contest/575132#problem/H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string findLucky(int n)
{
    vector<int> luckyNums = {4, 44, 47, 444, 447, 474, 477, 7, 77, 74, 777, 774, 747, 744};
    for (int s : luckyNums)
    {
        if (n % s == 0)
            return "YES";
    }
    return "NO";
}
int main()
{
    int n;
    cin >> n;
    cout << findLucky(n) << endl;
}