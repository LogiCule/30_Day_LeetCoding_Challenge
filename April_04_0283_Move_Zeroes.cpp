class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int len=nums.size();
        for(int i=0;j<len && i<len;i++)
        {
            if(nums[i]!=0 && nums[j]==0)
            {
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
            }
            if(nums[j]!=0)
                j++;
        }
    }
};
