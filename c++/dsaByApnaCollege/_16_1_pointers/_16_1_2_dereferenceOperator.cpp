#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int *ptr = &n;
    cout << "value of n: " << *ptr << endl; //!    value at ptr
    cout << "value of n: " << *(&n) << endl;
}