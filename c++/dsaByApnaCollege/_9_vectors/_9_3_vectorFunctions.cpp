#include <iostream>
#include <vector>
using namespace std;
int main()
{ /*
         TODO:   Vector Functions
                 1. size:
                        -> return the size of the vector
                 2. push_back
                        -> add elements in the last
                 3. pop_back
                        -> delete element from the last
                 4. front
                        -> print first element
                 5. back
                        -> print last element
                 6. at
                        -> print the element of n'th index
     */
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Size of the vector: " << vec.size() << endl;

    vec.push_back(25);
    cout << "after push back size of the vector: " << vec.size() << endl;

    vec.pop_back();
    vec.pop_back();
    cout << "after pop back size of the vector: " << vec.size() << endl;
    cout << "first element: " << vec.front() << endl;
    cout << "last element: " << vec.back() << endl;
    cout << "elment of index 3: " << vec.at(3) << endl;
}