class FirstUnique {
public:
    unordered_map<int,int> hash;
    queue<int> ord;
    FirstUnique(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int value=nums[i];
            if(this->hash.find(value)==this->hash.end())
            {
                this->hash[value]=1;
                this->ord.push(value);
            }
            else
            {
                this->hash[value]+=1;
            }
        }
    }
    
    int showFirstUnique() {
        while(!this->ord.empty() && this->hash[this->ord.front()]!=1)
            this->ord.pop();
        if(this->ord.empty())
            return -1;
        return int(this->ord.front());
    }
    
    void add(int value) {
        if(hash.find(value)==hash.end())
        {
            hash[value]=1;
            ord.push(value);
        }
        else
        {
            hash[value]+=1;
        }
    }
};
