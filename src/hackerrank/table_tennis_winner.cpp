#include <bits/stdc++.h>
using namespace std;

int tableTennisWinner(vector<int> &a, long long k)
{
    int n = a.size();
    if (n == 2)
    {
        if (a[0] > a[1])
            return a[0];
        else
            return a[1];
    }

    long long count = 0;
    while (count <= k)
    {
        if (a[0] > a[1])
        {
            count++;
            a.push_back(a[1]);
            a.erase(a.begin() + 1);
        }
        else
        {
            if (count == k)
            {
                return a[0];
            }

            count = 0;
            a.push_back(a[0]);
            a.erase(a.begin());
        }
    }
    return a[0];
}

int main()
{

    int n;
    long long k;
    cin >> n >> k;

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }

    cout << tableTennisWinner(a, k);

    return 0;
}