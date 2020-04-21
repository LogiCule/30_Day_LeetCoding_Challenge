class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &arr) {
        vector <int> d=arr.dimensions();
        int row=0;
        int col=d[1]-1;
        int index=-1;
        while(row>=0 && col>=0 && col<d[1] &&row<d[0] )
        {
            if(arr.get(row,col)==1)
            {
                index=col;
                col--;
            }
            else
            {
                row++;
            }
        }
        return index;
    }
};
