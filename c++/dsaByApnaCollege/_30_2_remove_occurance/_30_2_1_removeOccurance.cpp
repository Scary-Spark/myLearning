// TODO leetcode 1910
#include <iostream>
using namespace std;
string removeOccurance(string &s, string target)
{
    while (s.find(target) < s.length()) // if s.find is false then it will return garbage value which is greater than length
    {
        int index = s.find(target);
        s.erase(index, target.length());
    }
    return s;
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << removeOccurance(s, part) << endl;
}