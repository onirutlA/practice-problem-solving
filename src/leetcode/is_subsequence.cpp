// tags: #two-pointers, #string, #dynamic-programming
#include <bits/stdc++.h>

using namespace std;

// // two pointer method
// bool isSubsequence(string s, string t)
// {
//     int n = s.length(), m = t.length();
//     int j = 0;

//     /*
//         The idea is to traverse every character
//         then move the slow pointer if found matching character
//         in this case the fast pointer is i and the slow pointer is j
//      */
//     for (int i = 0; i < m and j < n; i++)
//     {
//         if (s[j] == t[i])
//             j++;
//     }

//     return j == n;
// }

// Dynamic Programming method
int isSubSequence(string &s, string &t, int i, int j, vector<vector<int>> &dp)
{
    if (i == 0 || j == 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    if (s[i - 1] == t[j - 1])
        return dp[i][j] = 1 + isSubSequence(s, t, i - 1, j - 1, dp);
    else
        return dp[i][j] = isSubSequence(s, t, i, j - 1, dp);
}

bool isSubsequence(string s, string t)
{

    int m = s.size();
    int n = t.size();

    if (m > n)
        return false;

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

    if (isSubSequence(s, t, m, n, dp) == m)
        return true;
    else
        return false;
}

int main()
{
    string s, t;
    cin >> s >> t;

    cout << isSubsequence(s, t) << "\n";

    return 0;
}