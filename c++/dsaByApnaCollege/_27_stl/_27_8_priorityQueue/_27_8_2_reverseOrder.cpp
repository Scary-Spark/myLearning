#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // in short sorted array
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(11);
    q.push(7);
    q.push(9);
    q.push(2);
    q.push(10);

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}