class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int len=text1.size();
        int width=text2.size();
        vector<vector<int>> dp(len,vector<int>(width));
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<width;j++)
            {
                if(text1[i]==text2[j])
                {
                    if(i>0 && j>0)
                    {
                        dp[i][j]=1+dp[i-1][j-1];
                    }
                    else
                    {
                        dp[i][j]=1;
                    }
                }
                else
                {
                    if(i>0 && j>0)
                    {
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                    else if(i>0)
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                    else if(j>0)
                    {
                        dp[i][j]=dp[i][j-1];
                    }
                    else
                    {
                        dp[i][j]=0;
                    }
                }
            }
        }
        return dp[len-1][width-1];
        
    }
};
