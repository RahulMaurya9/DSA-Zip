class MinStack {
    stack<long long> st;
    long long min;
public:
    MinStack() {
        while(st.empty() == false) st.pop();
        min = INT_MAX;
    }
    
    void push(int val) {
        long long el = val;
        if(st.empty()){
            st.push(el);
            min = el;
        }
        else{
            if(el< min){
            st.push(2 * el * 1LL - min);
            min = el;
        }
        else{
            st.push(el);
        }
            
        }
        
    }
    
    void pop() {
        if(st.empty()) return ;
        long long el = st.top();
        st.pop();
        if( el < min){
            min = 2 * min - el;
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        long long el = st.top();
        if(el < min) return min;
        return el;
        
        
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */