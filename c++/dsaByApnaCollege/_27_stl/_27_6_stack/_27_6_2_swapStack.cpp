#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    stack<int> t;
    t.push(10);
    t.push(11);
    t.push(12);

    t.swap(s);

    cout << "Stack s: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    cout << "Stack t: ";
    while (!t.empty())
    {
        cout << t.top() << " ";
        t.pop();
    }
    cout << endl;
}