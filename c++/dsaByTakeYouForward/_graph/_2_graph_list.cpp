#include <bits/stdc++.h>
using namespace std;
int main()
{
    int vertex, edges;
    cin >> vertex >> edges;
    vector<int> list[vertex];

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        list[u].push_back(v);
        list[v].push_back(u);
    }

    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < list[i].size(); j++)
        {
            cout << list[i][j] << "  ";
        }
        cout << endl;
    }
}