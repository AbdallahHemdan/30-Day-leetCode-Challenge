class MinStack {
public:
    vector<int> st;
    vector<int> mn;
    MinStack() {
    }
    
    void push(int x) {
        st.push_back(x);
        if(mn.empty() || mn.back() >= x) mn.push_back(x);
    }
    
    void pop() {
        if(st.back() == mn.back()){
            mn.pop_back();
        }
        st.pop_back();
    }
    
    int top() {
        if(!st.empty()) return st.back();
        return -1;
    }
    
    int getMin() {
        if(!mn.empty()) return mn.back();
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
