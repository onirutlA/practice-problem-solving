#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, l, r;
    cin >> t;
    for (long long tc = 1; tc <= t; tc++)
    {
        cin >> l >> r;

        long long n = min(l, r);
        long long result = n * (n + 1) / 2;

        cout << "Case #" << tc << ": " << result << "\n";
    }

    return 0;
}