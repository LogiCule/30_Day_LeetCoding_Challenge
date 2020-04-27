class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int max=0;
        if(matrix.size()==0)
            return 0;
        if(matrix.size()==1)
        {
            for(int i=0;i<matrix[0].size();i++)
                if(matrix[0][i]=='1')
                    return 1;
            return 0;
        }
        vector<vector<int>> dp(matrix.size()+1,vector<int>(matrix[0].size()+1));
        for(int i=0;i<=matrix.size();i++)
        {
            for(int j=0;j<=matrix[0].size();j++ )
            {
                if(matrix[i-1][j-1]=='1')
                {
                    if(i>0 && j>0)
                    {
                        dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
                    }
                    else if(i>0)
                    {
                        dp[i][j]=dp[i-1][j]+1;
                    }
                    else if(j>0)
                    {
                        dp[i][j]=dp[i][j-1]+1;
                    }
                    else
                    {
                        dp[i][j]=0;
                    }
                    if(max<dp[i][j])
                        max=dp[i][j];
                }
            }
        }
        return max*max;
    }
};
