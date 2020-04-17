class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]=='0')
            return;
        grid[i][j]='0';
        dfs(grid,i-1,j);
        dfs(grid,i+1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};
/*
Explaination: This code has an interesting approach that yoiu may have seen in minesweeper and is used in computer graphics 
thats why i want to explain it.
This algo is like 4 point flood fill ,whenever you encounter a 1 you fill it with it with 0 
and keep filling its neighbour with 0s till no neighbors with value of 1 remain.
and increase your count of island by 1;
*/
