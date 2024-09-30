class CustomStack {
public:
    stack<int>st,st2;
    int mSize=0;
    CustomStack(int maxSize) {
        mSize=maxSize;
    }
    
    void push(int x) {
        if(st.size()<mSize) st.push(x);
    }
    
    int pop() {
        if(!st.empty()) {
            int el=st.top();
            st.pop();
            return el;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        if(!st.empty()){
            k = min(k,(int)st.size());
            int n = st.size() - k;
            while (n--) {
                st2.push(st.top());
                st.pop();
            }
            while(k--){
                st2.push(st.top()+val);
                st.pop();
            }
            while(!st2.empty()){
                st.push(st2.top());
                st2.pop();
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */