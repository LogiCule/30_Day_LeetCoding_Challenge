class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=nums[0];
        int len=nums.size();
        for(int i=1;i<len;i++)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
};
/*
the magic of XOR 
since we have to find the number which only occurs once
the bitwise xor turns even repetion to zero
for example
2^2=0
so the cummulative xor of the whole array would be the term that only occurs once
*/
