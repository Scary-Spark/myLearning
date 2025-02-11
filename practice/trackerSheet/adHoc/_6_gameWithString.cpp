// TODO  https://vjudge.net/contest/575128#problem/F

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string findWinner(string s)
{
    int player = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s.at(i) == s.at(i - 1))
        {
            s.erase(i - 1, 2);
            player++;
            i = max(0, i - 2);
        }
    }

    if (player % 2 == 0)
        return "Yes";
    return "No";
}
int main()
{
    string s;
    cin >> s;
    cout << findWinner(s) << endl;
}