class Solution {
public:
    int lengthOfLongestSubstring(string& str) {
        if (str == "") return 0;
        else if (str.size() == 1) return 1;

        int mx = INT_MIN;
        int start = 0;
        unordered_set<int> window;
        window.insert(str[start]);

        for (int i=1; i<str.size(); i++) {
            if (window.find(str[i]) != window.end()) {
                while (window.count(str[i])) {
                    window.erase(str[start]);
                    ++start;
                }
            }
            window.insert(str[i]);
            mx = max(mx, i-start+1);
        }
        return mx;
    }
};
