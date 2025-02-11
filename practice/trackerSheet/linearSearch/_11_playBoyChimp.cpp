// TODO  https://vjudge.net/contest/575132#problem/E

#include <iostream>
#include <vector>
using namespace std;
void findLady(vector<int> f, int n)
{
    int minH = 0, maxH = 0;

    for (int i = 0; i < f.size(); i++)
    {
        if (f.at(i) < n)
            minH = f.at(i);
        else
            break;
    }
    for (int i = 0; i < f.size(); i++)
    {
        if (f.at(i) > n)
        {
            maxH = f.at(i);
            break;
        }
    }
    if (minH == 0)
        cout << "X" << " ";
    else
        cout << minH << " ";
    if (maxH == 0)
        cout << "X" << endl;
    else
        cout << maxH << endl;
}
int main()
{
    int female, male;
    cin >> female;
    vector<int> f;
    for (int i = 0; i < female; i++)
    {
        int n;
        cin >> n;
        f.push_back(n);
    }
    cin >> male;
    for (int i = 0; i < male; i++)
    {
        int n;
        cin >> n;
        findLady(f, n);
    }
}