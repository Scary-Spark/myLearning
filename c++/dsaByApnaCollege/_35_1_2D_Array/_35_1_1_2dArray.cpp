#include <iostream>
using namespace std;
int main()
{
    int rows = 4, colomns = 3;
    int matrix[rows][colomns] = {{1, 2, 6}, {2, 8, 4}, {4, 7, 6}, {6, 0, 8}};
    cout << "First elemtnt: " << matrix[0][0] << endl;

    cout << "Matrix is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colomns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}