#include <iostream>
#include <map>
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

    map<string, int> m;

    // for insert or change the value: map[key]=value;
    m["tv"] = 100;
    m["headphone"] = 50;
    m["tv"] = 23;
    m["watch"] = 56;
    m["fridge"] = 11;
    m["laptop"] = 23;
    // time complexity of insert, erase, count: O(logn)

    for (auto p : m)
    { // can also use pair as it is a pair type data
        cout << p.first << " " << p.second << " " << endl;
    }

    // insert a new value:
    m.insert({"camera", 24});
    m.emplace("phone", 48);

    // value for a specific key
    cout << "Total tv are: " << m["tv"] << endl;

    // check if a key exist in the map or not
    cout << "Tv: " << m.count("tv") << endl;
    cout << "tdfd: " << m.count("tdfd") << endl;

    // delete a key
    m.erase("laptop");

    // find a key
    if (m.find("camera") != m.end())
    {
        cout << "found\n";
    }
    else
    {
        cout << "Not found\n";
    }
}