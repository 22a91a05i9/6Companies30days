class MyStack {
private:
    stack<int>a,b;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        int res=a.top();
        a.pop();
        return res;
        
    }
    
    int top() {
        return a.top();
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */