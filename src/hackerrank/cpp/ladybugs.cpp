#include <bits/stdc++.h>

using namespace std;

string happyLadybugs(string b)
{

    int c[91]{0};
    string s;

    bool isEmptySpaceFound = false;
    int n = b.length();
    for (int i = 0; i < n; i++)
    {
        if (b[i] == '_')
            isEmptySpaceFound = true;
        else
            c[b[i]]++;
    }

    bool isAlreadyHappy = false;
    for (int i = 0; i < n - 1; i++)
    {
        isAlreadyHappy = b[i] != b[i + 1];
    }

    if (!isEmptySpaceFound && !isAlreadyHappy)
        return "NO";

    for (int i = 0; i < n; i++)
    {
        if (c[b[i]] >= 2)
            s = "YES";
        else
            return "NO";
    }

    return s;
}

int main()
{

    cout << happyLadybugs("BBB");

    return 0;
}