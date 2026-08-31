class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> um;
        for (auto& n: nums) {
            ++um[n];
        }

        std::vector<std::pair<int, int>> vec(um.begin(), um.end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b){
            return a.second > b.second;
        });

        vector<int> ans;
        for (int i=0; i<k; i++) {
            ans.push_back(vec[i].first);
        }

        return ans;
    }
};
