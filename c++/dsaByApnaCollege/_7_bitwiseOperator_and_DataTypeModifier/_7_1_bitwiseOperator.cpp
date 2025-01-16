#include <iostream>
using namespace std;
int main()
{
    /*
        TODO:   Bitwise operators:
                    i. bitwise and operator (&)
                    ii. bitwise or operator (|)
                    iii. bitwise x-or operator (^)
                    iv. bitwise left-shift (<<)
                    v. bitwise right-shift (>>)

        TODO:   Bitwise And (&):
                    i. 0 & 0 = 0
                    ii. 1 & 0 = 0
                    iii. 0 & 1 = 0
                    iv. 1 & 1 = 1

        TODO:   Bitwise OR Operator(|):
                    i. 0 | 0 = 0
                    ii. 1 | 0 = 1
                    iii. 0 | 1 = 1
                    iv. 1 | 1 = 1

        TODO:   Bitwise X-OR operator (^):
                    i. 0 ^ 0 = 0
                    ii. 1 ^ 0 = 1
                    iii. 0 ^ 1 = 1
                    iv. 1 ^ 1 = 0

        TODO:   Bitwise Left-Shift operator (<<)
                    i. for (n<i) it will move the n(binary form) to the left by i'th places.
                         like:  4<<1 will be :
                              4 = 1 0 0
                          4 << 1 = 1 0 0 0 = 8
                    ii. a << b :   a * (2^b)    //!  here ^ is power

        TODO:   Bitwise Right-Shift operator (>>)
                    i. for (n<i) it will move the n (binary form) to the right by i'th places.
                        like:  4<<1 will be :
                               4 = 1 0 0
                          4 << 1 = 0 0 1 0  = 2
                    ii. a >> b :   a / (2^b)   //!  here ^ is power

    */
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "a & b is: " << (a & b) << endl;
    cout << "a | b is: " << (a | b) << endl;
    cout << "a ^ b is: " << (a ^ b) << endl;
    cout << "4<<1 is: " << (4 << 1) << endl;
    cout << "4>>1 is: " << (4 >> 1) << endl;
}
