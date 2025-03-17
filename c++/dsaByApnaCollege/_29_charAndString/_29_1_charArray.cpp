#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;
int main()
{
    // also known as cstrings
    char str[] = {'a', 'b', 'c'};
    cout << "Char are: ";
    for (auto i : str)
    {
        cout << i << " ";
    }
    cout << endl;

    char str2[] = {"hellooow"};
    cout << "Char 2: " << str2 << endl;
    cout << "Length of char2: " << strlen(str) << endl; // note it will print the last index of the string. not the actual size. So actual size will be ++strlen(str);
}