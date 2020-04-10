    /** initialize your data structure here. */
    stack <int> num;
    stack <int> min;
    public:
    MinStack() {
            }
    
    void push(int x) {
        this->num.push(x);
        if(this->min.empty() || this->min.top()>=x)
        {
            this->min.push(x);
        }
    }
    
    void pop() {
        int n=this->num.top();
        this->num.pop();
        if(n==this->min.top())
        {
            this->min.pop();
        }
    }
    
    int top() {
        return this->num.top();
    }
    
    int getMin() {
        return this->min.top();
    }
};
