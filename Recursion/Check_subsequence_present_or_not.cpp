#include <bits/stdc++.h>
using namespace std;


bool solve(int idx, int sum, vector<int> &nums)
{

    if (sum == 0)
    {
        return true;
    }

    if (sum < 0 || idx == nums.size())
    {
        return false;
    }

    bool take = solve(idx + 1, sum - nums[idx], nums);
    bool nottake = solve(idx + 1, sum, nums);

    return take || nottake;
}

int main()
{
    vector<int> nums = {31, 32, 33, 34, 55};
    int target = 5;
    cout << "Check is there exist a subsequence with sum  " << target << ": " << solve(0, target, nums);
    return 0;
}