class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int len=prices.size();
        int low=0,high=0;
        while(high<len-1)
        {
            if(prices[high+1]<prices[high])
            {
                maxProfit+=prices[high]-prices[low];
                low=high+1;
                while(low<len-1 && prices[low]>prices[low+1])
                    low++;
                high=low+1;
            }
            
            else
            {
                high++;
            }
        }
        if(high<len && prices[high]>prices[low])
            maxProfit+=prices[high]-prices[low];
        if(maxProfit<0)
            return 0;
        return maxProfit;
    }
};
