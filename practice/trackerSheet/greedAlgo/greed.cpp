#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.rbegin(), s.rend());
    int i = 1;
    while (i < s.length())
    {
        if (s.at(i) == s.at(i - 1))
        {
            if (s.at(i) != 'z')
            {
                s.at(i - 1) = s.at(i) + 1;
                s.erase(i, 1);
                continue;
            }
        }
        i++;
    }
    cout << s << endl;
}