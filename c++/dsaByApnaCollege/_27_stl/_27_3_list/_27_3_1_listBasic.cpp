#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4};
    cout << "Elements are: ";
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(10);
    l.push_front(99);
    cout << "Elements after push on fornt and back: ";
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.pop_back();
    l.pop_front();
    cout << "Elements after pop from back and front: ";
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    //!  Note we can't directly access any index element in list
    // cout << l[2] << endl;
}