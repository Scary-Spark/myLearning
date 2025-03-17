// TODO  https://vjudge.net/contest/575138#problem/D
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int s, x;
    cin >> s >> x;
    int count = 0;

    while (s >= 1)
    {
        count++;
        s /= x;
    }
    cout << count << endl;
}