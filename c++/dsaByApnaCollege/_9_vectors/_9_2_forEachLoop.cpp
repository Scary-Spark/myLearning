#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    cout << "Elements are: ";
    for (char ch : vec)
    {
        cout << ch << " ";
    }
    cout << endl;
}