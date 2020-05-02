class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        map <char,int> m;
        while(count<J.length())
        {
            m.insert(pair<int, int>(J[count], count));
            count++;
        }
        count=0;
        int index=0;
        while(index<S.length())
        {
            if(m.count(S[index])>0)
            {
                count++;
            }
            index++;
        }
        return count;
    }
};
