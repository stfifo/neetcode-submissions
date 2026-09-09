class Solution {
public:
    int rob(vector<int>& nums) {
        int len=nums.size();
        if (len<=2) return *max_element(nums.begin(), nums.end());
        int dp[105]={0};
        dp[0]=nums[0], dp[1]=max(nums[0], nums[1]);
        for (int i=2; i<nums.size(); i++) {
            dp[i] = max(dp[i-2]+nums[i], dp[i-1]);
        }
        return dp[nums.size()-1];
    }
};
