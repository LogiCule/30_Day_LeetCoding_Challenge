class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> dyna(n);
        dyna[0] = nums[0];
        int maxSum = dyna[0];
        
        for(int i = 1; i < n; i++){
            dyna[i] = nums[i] + (dyna[i - 1] > 0 ? dyna[i - 1] : 0);
            maxSum = max(maxSum, dyna[i]);
        }
        
        return maxSum;
    }
};
/*
Problem:https://leetcode.com/problems/maximum-subarray/
*/
