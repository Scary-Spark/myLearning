// TODO  https://vjudge.net/contest/575132#problem/H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int digit;
    string s;
    cin >> digit;
    cin >> s;
    int count = 0;
    int canBeMade = digit / 11;
    for (char ch : s)
    {
        if (ch == '8' && count < canBeMade)
        {
            count++;
        }
    }
    cout << count << endl;
}