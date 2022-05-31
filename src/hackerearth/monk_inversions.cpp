#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vii;

int monkInversion(vii vii)
{
    int n = vii.size();

    int r = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = i; k < n; k++)
            {
                for (int l = j; l < n; l++)
                {
                    if (vii[i][j] > vii[k][l])
                        r++;
                }
            }
        }
    }
    return r;
}

int main()
{
    int t, n, v;
    cin >> t;
    vi vi;
    vii vii;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> v;
                vi.push_back(v);
            }
            vii.push_back(vi);
            vi.clear();
        }
        cout << monkInversion(vii) << "\n";
        vii.clear();
    }
}