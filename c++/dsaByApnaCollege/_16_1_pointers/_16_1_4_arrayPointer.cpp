#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl;  //! print the address of arr
    cout << *arr << endl; //! print arr[0]
    cout << *(arr + 1) << endl;
}