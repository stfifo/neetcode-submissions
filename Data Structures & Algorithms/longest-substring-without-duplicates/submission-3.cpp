class Solution {
public:
    int lengthOfLongestSubstring(string& str) {
        if (str == "") return 0;
        else if (str.size() == 1) return 1;

        int mx = INT_MIN;
        int start = 0;
        int num[135] = {0,};
        num[str[start]] = 1;

        for (int i=1; i<str.size(); i++) {
            if (num[str[i]]) {
                while (num[str[i]]) {
                    num[str[start]] = 0;
                    ++start;
                }
            }
            num[str[i]] = 1;
            mx = max(mx, i-start+1);
        }
        return mx;
    }
};
