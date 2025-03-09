// TODO  https ://vjudge.net/contest/356290#problem/G
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    int n;     // number of student as a creature
    int speed; // speed per scan
    for (int i = 1; i <= testCase; i++)
    {
        vector<int> creatureSpeed;
        cin >> n;
        while (n > 0)
        {
            cin >> speed;
            creatureSpeed.push_back(speed);
            n--;
        }
        sort(creatureSpeed.begin(), creatureSpeed.end());
        cout << "Case " << i << ": " << creatureSpeed.at(creatureSpeed.size() - 1) << endl;
    }
}