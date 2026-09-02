class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;
        const int M = 20000;
        vector<vector<string>> result;

        for (auto& str: strs) {
            string s = str;
            sort(s.begin(), s.end());
            um[s].push_back(str);
        }

        for (auto& [key, vec] : um) {
            result.push_back(vec);
        }

        return result;
    }
};
