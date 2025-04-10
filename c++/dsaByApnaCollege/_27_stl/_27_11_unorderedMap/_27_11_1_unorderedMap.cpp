#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    /*
        mainly works with key and value

        here,
            key is unique
            values are can be same

        note:
            here key's are lexicographically sorted
    */

    unordered_map<string, int> m; // unlike map, it's randomly insert key's position
    // time complexity of insert, erase, count: O(1)

    // for insert or change the value: map[key]=value;
    m["tv"] = 100;
    m["headphone"] = 50;
    m["tv"] = 23;
    m["watch"] = 56;
    m["fridge"] = 11;
    m["laptop"] = 23;

    for (auto p : m)
    { // can also use pair as it is a pair type data
        cout << p.first << " " << p.second << " " << endl;
    }
}