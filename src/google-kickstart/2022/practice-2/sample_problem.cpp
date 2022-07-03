#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        cin >> n >> m;

        int c[n] = {};
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            sum += c[i];
        }

        int result = sum % m;

        cout << "Case #" << tc << ": ";
        cout << result << "\n";
    }

    return 0;
}