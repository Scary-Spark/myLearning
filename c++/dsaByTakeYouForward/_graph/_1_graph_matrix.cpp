#include <bits/stdc++.h>
using namespace std;
int main()
{
    int vertex, edges;
    cin >> vertex >> edges;
    int u, v;
    vector<vector<bool>> matrix(vertex, vector<bool>(vertex, 0));
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        matrix[v][u] = 1;
        matrix[u][v] = 1;
    }

    cout << "Adjecency matrix: \n";
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}