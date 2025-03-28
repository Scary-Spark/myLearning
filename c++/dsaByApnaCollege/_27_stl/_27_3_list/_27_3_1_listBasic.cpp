#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4};
    l.push_back(10);
    l.push_front(99);
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.pop_back();
    l.pop_front();
}