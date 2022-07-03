#include <bits/stdc++.h>
#define PB push_back
using namespace std;
typedef vector<int> vi;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int lcm(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    else
    {
        int g = gcd(a, b);
        return abs(a * b) / g;
    }
}

int getTotalX(vi a, vi b)
{
    int n = a.size();
    int m = b.size();
    int count = 0;

    int la = a[0];
    for(int i: a){
        la = lcm(la, i);
    }

    int gb = b[0];
    for(int i: b){
        gb = gcd(gb, i);
    }

    int multiple = 0;
    while(multiple <= gb){
        multiple += la;
        if(gb % multiple == 0)
            count++;
    }
    return count;
}

int main()
{
    int n, m, v;
    cin >> n >> m;
    vi a, b;
    while (n--)
    {
        cin >> v;
        a.PB(v);
    }
    while (m--)
    {
        cin >> v;
        b.PB(v);
    }

    cout << getTotalX(a, b);

    return 0;
}