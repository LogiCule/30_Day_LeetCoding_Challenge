class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i=0;i<46341 && i*i<=num ;i++)
        {
            try{
                if(i*i==num)
                    return true;    
            }
            catch(int i){
                break;
            }
            
            
        }
        return false;
    }
};
