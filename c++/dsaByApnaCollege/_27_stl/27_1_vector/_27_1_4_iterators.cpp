#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {2, 4, 6, 7, 8, 1, 4, 7, 4};
    /*
        2 type of iterators:
            1. nums.begin()
            2. nums.end()

        !NOTE:
            if we use nums.end its indiate the n-th idex.
            i.e if a vector is 5 size then it will indicate 5th index. (it will print the garbage value)

        !NB:
            this iterators are pointers. so we have to use *(num.begin()) to print the value
    */

    cout << "Value at nums.end(): " << *(nums.end()) << endl;

    // TODO how to declare iterators
    vector<int>::iterator it;
    cout << "elements: ";
    for (it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // backward print

    cout << "elements (backwards): ";
    for (auto rit = nums.rbegin(); rit != nums.rend(); rit++)
    {
        cout << *rit << " ";
    }
    cout << endl;
}