class Solution {
public:
    int findComplement(int num) {
        int shift=0;
        int com=0;
        if(num==0)
            return 1;
        while(num)
        {
            int temp=((num)&1)^1;
            com=com|(temp<<shift);
            num=num>>1;
            shift++;
        }
        return com;
    }
};
