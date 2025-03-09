// TODO  https://vjudge.net/contest/575132#problem/F

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase > 0)
    {
        int total;
        cin >> total;
        int score;
        cin >> score;
        int dif = INT_MIN;
        for (int i = 1; i < total; i++)
        {
            int n;
            cin >> n;
            dif = max(dif, score - n);
            score = max(score, n);
        }
        cout << dif << endl;
        testCase--;
    }
}