#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, x;
    int l, r;
    cin >> n >> l >> r >> x;
    int c[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int res = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        int mn = INT_MAX, mx = INT_MIN, count = 0, sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)))
            {
                count++;
                sum += c[j];
                mx = max(mx, c[j]);
                mn = min(mn, c[j]);
            }
        }

        if ((mx - mn) >= x && sum >= l && sum <= r && count >= 2)
            res++;
    }

    cout << res;

    return 0;
}