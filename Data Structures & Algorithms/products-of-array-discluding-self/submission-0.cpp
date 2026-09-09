class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto it = find(nums.begin(), nums.end(), 0);
        int idx = it-nums.begin();
        int len = nums.size();
        int all_mul = 1;
        // 0이 아니라면
        for (int i=0; i<len; i++) {
            if (i != idx) all_mul *= nums[i];
            else continue;
        }

        vector<int> result(len); result.resize(len);
        if (it != nums.end()) result[idx] = all_mul;
        else {
            for (int i=0; i<len; i++) result[i] = all_mul / nums[i];
        }

        return result;
    }
};
