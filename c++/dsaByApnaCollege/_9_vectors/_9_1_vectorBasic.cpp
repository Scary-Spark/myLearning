#include <iostream>
#include <vector> //
using namespace std;
int main()
{
    /*
        TODO:   vectors
                It's a dynamic data type array that can change it's size

    */

    vector<int> vec;
    vector<int> vec2 = {1, 2, 3};
    vector<int> vec3(3, 0);
    //? 3 is the size of vector and 0 is element (this element is same for every index)

    //! for vec3:
    cout << "Elements of vector 3: ";
    for (int i = 0; i < 3; i++)
    {
        cout << vec3[i] << " ";
    }
    cout << endl;
}