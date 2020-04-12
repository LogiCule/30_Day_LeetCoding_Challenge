class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int ind;
        while(stones.size()>1)
        {
            ind=stones.size()-1;
            sort(stones.begin(),stones.end());
            if(stones[ind]==stones[ind-1])
            {
                stones.pop_back();
                stones.pop_back();
            }
            else
            {
                stones[ind-1]=stones[ind]-stones[ind-1];
                stones.pop_back();
            }
        }
        if(stones.size())
            return stones[0];
        else
            return 0;
    }
};
