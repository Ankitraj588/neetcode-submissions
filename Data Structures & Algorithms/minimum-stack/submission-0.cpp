class MinStack {
public:
stack<int>s;

    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);        
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
     return   s.top();
    }
    
    int getMin() {
        stack<int>temp=s;
        int m=INT_MAX;
        while(!temp.empty())
        {
            m=min(temp.top(),m);
            temp.pop();
        }
    return m;
    }
};
