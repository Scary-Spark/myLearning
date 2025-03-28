#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // in short sorted array
    priority_queue<int> q; // default larger will go to top
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
    /*
        time complexity for push and pop: O(logn)
        time complexity for top: O(1)
    */
}