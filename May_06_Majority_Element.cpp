class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            cout<<freq[nums[i]];
            if(++freq[nums[i]]>(len/2))
                return nums[i];
            
        }
        return 0;
    }
};
