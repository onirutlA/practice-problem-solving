#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define PB push_back

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vii;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, s, v;
    cin >> n >> q;
    vii vii;
    while (n--)
    {
        cin >> s;
        vi vi;
        for (int i = 0; i < s; i++)
        {
            cin >> v;
            vi.PB(v);
        }
        vii.PB(vi);
    }
    while (q--)
    {
        int j;
        int i;
        cin >> i >> j;
        cout << vii[i][j] << "\n";
    }
    return 0;
}