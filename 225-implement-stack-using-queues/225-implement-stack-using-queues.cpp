class MyStack {
public:
    queue<int> que;
    MyStack() {
        
    }
    
    void push(int x) {
        que.push(x);
    }
    
    int pop() {
        if(que.empty()) return -1;
        int val = 0;
        int len  = que.size();
        while(len != 0){
            if(len ==1 ){
                val = que.front();
                que.pop();
            }
            else{
                que.push(que.front());
                que.pop();
                
            }
            --len;
        }
        return val;
    }
    
    int top() {
        if(que.empty()) return -1;
        return que.back();   
    }
    
    bool empty() {
        if(que.empty()) return true;
        return false;
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