#include <bits/stdc++.h>

using namespace std;

const int validSquare[8][9] = {
    {8, 1, 6, 3, 5, 7, 4, 9, 2},
    {4, 3, 8, 9, 5, 1, 2, 7, 6},
    {2, 9, 4, 7, 5, 3, 6, 1, 8},
    {6, 7, 2, 1, 5, 9, 8, 3, 4},
    {6, 1, 8, 7, 5, 3, 2, 9, 4},
    {8, 3, 4, 1, 5, 9, 6, 7, 2},
    {4, 9, 2, 3, 5, 7, 8, 1, 6},
    {2, 7, 6, 9, 5, 1, 4, 3, 8}};

int formingMagicSquare(int s[])
{
    int minimum = 10;
    for (int i = 0; i < 8; i++)
    {
        int diff = 0;
        for (int j = 0; j < 9; j++)
            diff += abs(s[j] - validSquare[i][j]);

        if (diff < minimum)
            minimum = diff;
    }
    return minimum;
}

int main()
{
    int s[9];
    for (int i = 0; i < 9; i++)
        cin >> s[i];

    cout << formingMagicSquare(s);

    return 0;
}
