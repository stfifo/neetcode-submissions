class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for (int i=0; i<nums.size(); i++) {
            int k = nums[i];
            if (m.find(target-k) != m.end()) return {min(m[target-k], i), max(m[target-k], i)};
            else m[k]=i;
        }
    }
};
