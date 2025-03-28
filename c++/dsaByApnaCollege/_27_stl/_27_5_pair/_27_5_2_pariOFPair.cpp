#include <iostream>
#include <vector>
using namespace std;
int main()
{
    pair<int, pair<string, int>> p = {1, {"Spark", 2}};

    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;

    vector<pair<char, int>> vec = {{'a', 1}, {'b', 2}, {'c', 3}};
    for (pair<char, int> p : vec) // alco 'auto' can be used
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    vec.push_back({2, 3});
    vec.emplace_back(2, 3);
}