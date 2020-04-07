class Solution {
public:
    int countElements(vector<int>& arr) {
        int freq[1001]={0};
        int len=arr.size();
        int count=0;
        int max=0;
        for(int i=0;i<len;i++)
        {
            freq[arr[i]]++;
            if(max<arr[i])
                max=arr[i];
        }
        for(int i=1;i<=max;i++)
        {
            if(freq[i]>=1)
                count+=freq[i-1];
        }
        return count;
    }
};
/*Problem:Could not find this problem in thier problems list*/
