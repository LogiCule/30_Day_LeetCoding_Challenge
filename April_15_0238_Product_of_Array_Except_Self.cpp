class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int> left(len);
        vector<int> right(len);
        vector<int> ans(len);
        left[0]=1;
        right[len-1]=1;
        for(int i=1;i<len;i++)
        {
            left[i]=left[i-1]*nums[i-1];
        }
        for(int i=len-2;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i+1];
        }
        for(int i=0;i<len;i++)
        {
            ans[i]=left[i]*right[i];
        }
        return ans;
    }
};
