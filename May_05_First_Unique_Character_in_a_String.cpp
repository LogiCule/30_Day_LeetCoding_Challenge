class Solution {
public:
    int firstUniqChar(string s) {
        int len=s.length();
        int count[26]={0};
        for(int i=0;i<len;i++)
        {
            count[s[i]-97]++;
        }
        for(int i=0;i<len;i++)
        {
            if(count[s[i]-97]==1)
                return i;
        }
        return -1;
    }
};
