#include <bits/stdc++.h>

using namespace std;

void duplicateZeros(vector<int> &arr)
{
    int possibleDups = 0;
    int length = arr.size() - 1;

    for (int left = 0; left <= length - possibleDups; left++)
    {
        if (arr[left] == 0)
        {
            if (left == length - possibleDups)
            {
                arr[length] = 0;
                length -= 1;
                break;
            }
            possibleDups++;
        }
    }

    int last = length - possibleDups;

    for (int i = last; i >= 0; i--)
    {
        if (arr[i] == 0)
        {
            arr[i + possibleDups] = 0;
            possibleDups--;
            arr[i + possibleDups] = 0;
        }
        else
        {
            arr[i + possibleDups] = arr[i];
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    while (n--)
    {
        int v;
        cin >> v;
        arr.push_back(v);
    }

    duplicateZeros(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}