#include <iostream>
using namespace std;
int main()
{
    int n, max = 0, let = 0;
    for (;;)
    {
        cin >> n;
        if (n == 0)
            break;
        max = 0;
        string name[n];
        for (int i = 0; i < n; i++)
        {
            cin >> name[i];
            if (name[i].length() > max)
                max = name[i].length();
        }
        for (int i = 0; i < n; i++)
        {
            int l = max - name[i].length();
            for (int j = 0; j < l; j++)
                cout << " ";
            cout << name[i] << endl;
        }
        cout << endl;
    }
}