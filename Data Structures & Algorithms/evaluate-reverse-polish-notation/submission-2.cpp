class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int x1, x2;

        for (const auto& token : tokens) {
            auto c = token[0];
            if (token.size() == 1 && (c == '*' || c == '/' || c == '+' || c == '-')) {
                x2 = st.top(); st.pop();
                x1 = st.top(); st.pop();

                switch (c) {
                    case '*': st.push(x1*x2); break;
                    case '/': st.push(x1/x2); break;
                    case '+': st.push(x1+x2); break;
                    case '-': st.push(x1-x2); break;
                }
            }
            else st.push(stoi(token));
        }

        return st.top();
    }
};
