#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6, 67, 24, 67}, {7, 8, 9, 10}};
    cout << vec[2][2] << endl;

    cout << "Total rows: " << vec.size() << endl;
    cout << "Total colomns: " << vec[0].size() << endl;

    cout << "Matrix: " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}