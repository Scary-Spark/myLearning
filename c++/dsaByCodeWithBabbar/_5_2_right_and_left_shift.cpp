#include <iostream>
using namespace std;
int main()
{
    // TODO  left shift and right shift
    /*
         a << b (LEFT shift)
         here,
            a is the input number
            b is how many times you want to shift
        like:
            if 3 << 2 then here,
                3 = 0 0 0 1 1
                1st shift = 0 0 0 1 1 0
                2nd shift = 0 0 1 1 0 0
                thus, the ans: 12
    */

    int a = 3, b = 2;
    cout << " a << b :   " << (a << b) << endl;

    /*
        a >> b (right shift)
        if  5 >> 2
            then here,
                5 = 0 0 0 0 1 0 1
                1st right shift = 0 0 0 0 0 1 0
                2nd right shift = 0 0 0 0 0 0 1
            thus, the ans: 1
    */
    a = 5, b = 2;
    cout << " a >> b :  " << (a >> b) << endl;
}
