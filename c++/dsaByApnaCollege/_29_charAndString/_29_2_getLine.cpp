#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    int n = 100;
    char str[n];
    cout << "Enter word: ";
    cin >> str;
    // here if we input a sentece, it will only take the first word. others will be ignored
    cout << "You have entered: ";
    cout << str << endl;
    cin.ignore(n, '\n'); // clear input buffer

    // to solve this issue we can use cin.getline(str, len, delim(optional));
    cout << "String input: ";
    cin.getline(str, n, '\n');
    cout << "String output: " << str << endl;
}