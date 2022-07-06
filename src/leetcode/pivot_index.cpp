#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int pivotIndex(vi &nums)
{
    int n = nums.size();

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    int ls = 0;
    int rs = sum;
    for (int i = 0; i < n; i++)
    {
        rs = rs - nums[i];

        if (ls == rs)
            return i;

        ls += nums[i];
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;
    vi nums;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        nums.push_back(v);
    }

    int result = pivotIndex(nums);

    cout << result << "\n";

    return 0;
}