#include <bits/stdc++.h>

using namespace std;

bool isIsomorphic(string s, string t)
{
    int st[128] = {};
    int ts[128] = {};

    for (int i = 0; i < s.length(); i++)
    {
        char cs = s[i];
        char ct = t[i];

        if (st[cs] == 0 && ts[ct] == 0)
        {
            st[cs] = ct;
            ts[ct] = cs;
        }
        else if (!(st[cs] == ct && ts[ct] == cs))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s, t;
    cin >> s >> t;

    bool result = isIsomorphic(s, t);
    cout << result;

    return 0;
}