// TODO  https://vjudge.net/contest/575132#problem/G

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
string findString(string s)
{
    int count1 = 0;
    bool zeroAppear = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '1')
        {
            if (zeroAppear == true)
            {
                return "NO";
            }
            count1++;
        }
        if (count1 > 0 && s.at(i) == '0')
        {
            zeroAppear = true;
        }
    }
    if (count1 == 0)
        return "NO";
    return "YES";
}
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        string s;
        cin >> s;
        cout << findString(s) << endl;
        n--;
    }
}