vector<vector<int>> visitP;
class Solution {
public:
    void dfs(vector<vector<int>>& image,int i,int j,int color,int paint)
    {
        cout<<i<<" "<<j<<endl;
        if(i<0 || j<0)
            return;
        if(i>=image.size() || j>=image[0].size())
            return;
        if(visitP[i][j])
        {
            return;
        }
        else
        {
            visitP[i][j]=1;
        }
        if(image[i][j]!=color)
        {
            return;
        }
        image[i][j]=paint;
        dfs(image,i+1,j,color,paint);
        dfs(image,i-1,j,color,paint);
        dfs(image,i,j+1,color,paint);
        dfs(image,i,j-1,color,paint);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        visitP.clear();
        visitP.resize(image.size(),vector<int>(image[0].size(),0));
        if(image.size())
        {
            dfs(image,sr,sc,image[sr][sc],newColor);
        }
        return image;
    }
};
