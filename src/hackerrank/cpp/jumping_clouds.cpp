#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<int> c)
{
    int jump = 0;
    int n = c.size();
    int maxIndex = n - 1;
    for (int i = 0; i < n; i++)
    {
        if ((c[i + 1] != 1 && c[i + 2] != 1) && i != maxIndex)
        {
            jump++;
            i += 1;
        }
        else if (c[i + 1] == 1 && i != maxIndex)
        {
            jump++;
            i += 1;
        }
        else if (i != maxIndex)
        {
            jump++;
        }
    }
    return jump;
}

int main()
{
    int n, v;
    cin >> n;

    vector<int> c;

    while (n--)
    {
        cin >> v;
        c.push_back(v);
    }

    cout << jumpingOnClouds(c);

    return 0;
}
