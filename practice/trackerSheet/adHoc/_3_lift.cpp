// TODO  https://vjudge.net/contest/575128#problem/C

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testCase;
    int personPosition, liftPosition;
    cin >> testCase;
    int totalTime;
    for (int i = 1; i <= testCase; i++)
    {
        cin >> personPosition >> liftPosition;
        if (personPosition <= liftPosition)
        {
            totalTime = liftPosition * 4 + 3 + 3 + 3 + 10;
        }
        else
        {
            totalTime = personPosition * 4 + 3 + 3 + 3 + 10 + abs(personPosition - liftPosition) * 4;
        }

        cout << "Case " << i << ": " << totalTime << endl;
    }
}