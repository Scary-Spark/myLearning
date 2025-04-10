// leetcode 125
#include <iostream>
using namespace std;
bool alphaNumeric(char c)
{
    if ('a' <= c && c <= 'z')
        return true;
    else if ('A' <= c && c <= 'Z')
        return true;
    else if ('0' <= c && c <= '9')
        return true;
    return false;
}
bool isPalindrome(string s)
{
    int start = 0, end = s.length() - 1;

    while (start < end)
    {
        if (!alphaNumeric(s[start]))
        {
            start++;
            continue;
        }
        if (!alphaNumeric(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string s;
    s = "Ac3?e3c&a";

    isPalindrome(s) ? cout << "Palindrome\n" : cout << "Not Palindrome\n";
}