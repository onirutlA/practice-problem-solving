#include <bits/stdc++.h>

using namespace std;

/*
    Question:   Given an array of integers nums and an integer target,
                return indices of the two numbers such that they add up to target.
                You may assume that each input would have exactly one solution, 
                and you may not use the same element twice. You can return the answer in any order.

*/

//  time complexity: O(N)
//  space complexity: O(s+t) or O(2N) assuming s and t is the same length;
bool isAnagram(string s, string t)
{
    unordered_map<char, int> m;
    unordered_map<char, int> n;

    if (t.length() != s.length())
        return false;

    for (int i = 0; i < s.length(); i++)
    {
        if (m.find(s[i]) == m.end())
            m[s[i]] = 1;
        else if (m.find(s[i]) != m.end())
            m[s[i]] = ++m[s[i]];

        if (n.find(t[i]) == n.end())
            n[t[i]] = 1;
        else if (n.find(t[i]) != n.end())
            n[t[i]] = ++n[t[i]];
    }

    bool result = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (m[s[i]] == n[s[i]])
            result = true;
        else
            return false;
    }

    return result;
}

int main()
{
    string s, t;
    cin >> s >> t;

    cout << isAnagram(s, t);

    return 0;
}