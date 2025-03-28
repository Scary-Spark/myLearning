#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<string, int> m;
    m.emplace("tv", 100);
    m.emplace("tv", 34);
    m.emplace("tv", 66);
    m.emplace("tv", 27);
    for (auto p : m)
    { // can also use pair as it is a pair type data
        cout << p.first << " " << p.second << " " << endl;
    }

    cout << "After erase: " << endl;
    m.erase(m.find("tv")); // remove the top/first index (i.e value with 100)
    for (auto p : m)
    { // can also use pair as it is a pair type data
        cout << p.first << " " << p.second << " " << endl;
    }
}