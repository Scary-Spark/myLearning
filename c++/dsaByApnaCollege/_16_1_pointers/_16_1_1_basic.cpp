#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    cout << "Value of n: " << n << endl;
    cout << "Address of n: " << &n << endl; //!    Hexadecimal

    int *nn = &n; //!  assign address inside a pointer variable

    float price = 22.12f;
    float *pricePtr = &price;

    // TODO pointer to pointer
    int x = 12;
    int *ptr = &x;
    int **addOfPtr = &ptr;
    cout << "Address of x: " << &x << endl;
    cout << "Address of x(using pointer variable): " << ptr << endl;
    cout << "Address of ptr: " << addOfPtr << endl;
}