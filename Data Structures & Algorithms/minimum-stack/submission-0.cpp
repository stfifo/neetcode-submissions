class MinStack {
    stack<int> st;
    stack<int> min_st;
public:

    MinStack() : st(), min_st() { }
    
    void push(int val) {
        st.push(val);

        if (min_st.empty()) min_st.push(val);
        else if (min_st.top() > val) min_st.push(val);
        else if (min_st.top() <= val) min_st.push(min_st.top());
    }
    
    void pop() {
        min_st.pop(); st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
