vector<vector<int> > vec;  
class Solution {
public:
    void fillPath(vector<vector<int>>& grid,int i,int j)
    {
        if(i==grid.size()-1 && j==grid[0].size()-1)
            return;
        if(vec[i][j]!=-1)
            return;
        if(i==grid.size()-1)
        {
            if(vec[i][j+1]==-1)
            {
                fillPath(grid,i,j+1);
            }
            vec[i][j]=grid[i][j]+vec[i][j+1];
        }
        else if(j==grid[0].size()-1)
        {
            if(vec[i+1][j]==-1)
            {
                fillPath(grid,i+1,j);
            }
            vec[i][j]=grid[i][j]+vec[i+1][j];
        }
        else
        {
            if(vec[i][j+1]==-1)
            {
                fillPath(grid,i,j+1);
            }
            if(vec[i+1][j]==-1)
            {
                fillPath(grid,i+1,j);
            }
            vec[i][j]=grid[i][j]+min(vec[i+1][j],vec[i][j+1]);
            
        }
        cout<<vec[i][j]<<endl;
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        int len=grid.size();
        int width=grid[0].size();
        vec.clear();
        vec.resize(len, vector<int> (width, -1));
        vec[len-1][width-1]=grid[len-1][width-1];
        fillPath(grid,0,0);
        return vec[0][0];
    }
};
