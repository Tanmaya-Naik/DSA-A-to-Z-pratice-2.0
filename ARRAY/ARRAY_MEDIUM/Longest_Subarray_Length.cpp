#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int longestSubarrayWithSumK(vector<int>& nums, int k) {
    int n = nums.size();
    int maxCount = 0;

    for (int start = 0; start < n; start++) {
        int currentSum = k;
        int count = 0;

        for (int i = start; i < n; i++) {
            if (currentSum > nums[i]) {
                currentSum -= nums[i];
                count++;
            }
            else if (currentSum == nums[i]) {
                count++;
                maxCount = max(maxCount, count);
                break;  // subarray found, stop here
            }
            else {
                break;  // sum exceeded, not valid
            }
        }
    }

    return maxCount;
}

};

int main() {
    Solution sol;

    
    vector<int> nums = {2,3,5,1,2,-1,3,4,-1,1,9,10}; 
    int k = 3;

    int result = sol.longestSubarrayWithSumK(nums, k);
    cout << "Length of longest subarray: " << result << endl;

    return 0;
}
