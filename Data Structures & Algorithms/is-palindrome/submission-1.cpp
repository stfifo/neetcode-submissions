class Solution {
public:
    bool isPalindrome(string str) {
        string s = "";
        for (auto&c : str) {
            if (('a'<= c &&  c <= 'z') || ('A'<= c && c <= 'Z') || ('0'<= c && c <= '9')) s += tolower(c);
        }
        cout << s;
        int st = 0, en = s.size()-1;
        while (st < en) {
            if (s[st] != s[en]) return false;
            st++;
            en--;
        }
        return true;
    }
};
