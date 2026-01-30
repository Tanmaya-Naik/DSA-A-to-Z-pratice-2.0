/*
Count all subsequences with sum K



7

Problem Statement: Given an array nums and an integer k.Return the number of non-empty subsequences of nums such that the sum of all elements in the subsequence is equal to k.

Examples
Example 1:
Input :
 nums = [4, 9, 2, 5, 1] , k = 10
Output :
 2
Explanation :
 The possible subsets with sum k are [9, 1] , [4, 5, 1].

Example 2:
Input :
 nums = [4, 2, 10, 5, 1, 3] , k = 5
Output :
 3
Explanation :
 The possible subsets with sum k are [4, 1] , [2, 3] , [5].
*/

#include <bits/stdc++.h>
using namespace std;

int solve(int idx, int sum, vector<int> &nums)
{
    if (sum == 0)
        return 1;

    if (sum < 0 || idx == nums.size())
        return 0;

    int count = 0;
    count += solve(idx + 1, sum - nums[idx], nums);
    count += solve(idx + 1, sum, nums);

    return count;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 5;
    cout << "Number of subsequences with target sum " << target << ": " << solve(0, target, nums);
    return 0;
}