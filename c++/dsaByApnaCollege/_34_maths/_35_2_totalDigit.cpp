#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    // Time complexity to find digit (any process) :  log10(n)
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Total Digit: " << (int)(log10(n) + 1) << endl;
}