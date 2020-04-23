class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int num=0;
        int shift=30;
        while(shift>=0 && ((n>>shift)&1)==0)
        {
            shift--;
        }
        while(shift>=0 && ((n>>shift)&1) == ((m>>shift)&1))
        {
            num=num|(((n>>shift)&1)<<shift);
            shift--;
        }
        return num;
    }
};
