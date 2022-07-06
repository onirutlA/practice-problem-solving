#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi runningSum(vi &nums)
{
    int sum = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        sum = nums[i] + nums[i - 1];
        nums[i] = sum;
    }

    return nums;
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

    nums = runningSum(nums);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
    }

    return 0;
}