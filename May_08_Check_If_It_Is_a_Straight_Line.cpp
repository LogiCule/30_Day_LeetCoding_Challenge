class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int len = coordinates.size();
        if(len==2)
            return true;
        float distance = (coordinates[1][1]-coordinates[0][1])/(1.0*(coordinates[1][0]-coordinates[0][0]));
        for(int i=2;i<len;i++)
        {
            float temp = (coordinates[i][1]-coordinates[0][1])/(1.0*(coordinates[i][0]-coordinates[0][0]));
            if(temp!=distance)
                return false;
        }
        return true;
        
    }
};
