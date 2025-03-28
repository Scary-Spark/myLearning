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

    s.pop(); // pop top of the stack

    cout << "Top of the stack: " << s.top() << endl;
    cout << "size of stack: " << s.size() << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}