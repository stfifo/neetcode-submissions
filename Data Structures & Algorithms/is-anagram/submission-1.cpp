class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> cnt_s(26);
        vector<int> cnt_t(26);
        for (auto& i: s) cnt_s[i-'a']++;
        for (auto& i: t) cnt_t[i-'a']++;
        return cnt_s == cnt_t;
    }
};
