class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int x1, x2;

        for (auto& c : tokens) {
            if (c == "*" || c == "/" || c == "+" || c == "-") {
                x2 = st.top(); st.pop();
                x1 = st.top(); st.pop();
                if (c == "*") st.push(x1*x2);
                else if (c == "/") st.push(x1/x2);
                else if (c == "+") st.push(x1+x2);
                else if (c == "-") st.push(x1-x2);
            }
            else st.push(stoi(c));
        }

        return st.top();
    }
};
