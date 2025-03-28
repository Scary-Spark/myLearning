#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1;
    vector<int> vec2 = {2, 5, 2};
    vector<int> vec3(3, 10); // 3 size and all of element are 10
    vector<int> vec4(vec2);  // copying the values of vector 1

    // add element in the last index
    vec1.push_back(12);
    vec1.push_back(4);
    vec1.push_back(23);
    vec1.push_back(11);
    vec1.push_back(3);
    vec1.push_back(7);

    // remove last element
    vec1.pop_back();

    // print
    cout << "Vector 1: ";
    for (auto i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Vector 2: ";
    for (auto i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Vector 3: ";
    for (auto i : vec3)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Vector 4: ";
    for (auto i : vec4)
    {
        cout << i << " ";
    }
    cout << endl;

    // sort (acending order)
    sort(vec1.begin(), vec1.end());
    cout << "Ascending order: ";
    for (auto i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;

    // sort (descending order)
    sort(vec1.rbegin(), vec1.rend());
    cout << "Descending order: ";
    for (auto i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;
}