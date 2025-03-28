#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> a = {1, 2, 4, 5, 3};
    next_permutation(a.begin(), a.end());

    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
}