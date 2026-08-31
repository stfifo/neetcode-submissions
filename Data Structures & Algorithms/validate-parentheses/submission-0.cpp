class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;
        vector<char> v = {')', ']', '}'};
        for (auto& c: s) {
            if (find(v.begin(), v.end(), c) != v.end()) {
                if (bracket.empty()) return false;
                char back_ = bracket.top();
                if (back_ == '(') {
                    if (c == ')') bracket.pop();
                    else return false;
                }
                else if (back_ == '[') {
                    if (c == ']') bracket.pop();
                    else return false;
                }
                else if (back_ == '{') {
                    if (c == '}') bracket.pop();
                    else return false;
                }
            }
            else bracket.push(c);
        }
        if (!bracket.empty()) return false;
        else return true;
    }
};
