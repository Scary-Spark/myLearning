#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> n = {1, 2, 3};
    // same as list but we can directly access any index element
    cout << n.at(2) << endl;
    cout << n[1] << endl;
}