#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(5);
    cout << "Size: " << vec.size() << "    and capacity: " << vec.capacity() << endl;
    vec.push_back(10);
    cout << "Size: " << vec.size() << "    and capacity: " << vec.capacity() << endl;
    vec.push_back(15);
    cout << "Size: " << vec.size() << "    and capacity: " << vec.capacity() << endl;
    vec.push_back(20);
    cout << "Size: " << vec.size() << "    and capacity: " << vec.capacity() << endl;
    vec.push_back(25);
    cout << "Size: " << vec.size() << "    and capacity: " << vec.capacity() << endl;
}