class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26]={0};
        for(int i=0;i<magazine.length();i++)
        {
            freq[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            if(--freq[ransomNote[i]-'a']<0)
                return false;
        }
        return true;
    }
};
