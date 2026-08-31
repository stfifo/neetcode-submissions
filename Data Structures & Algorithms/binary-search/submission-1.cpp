class Solution {
public:
    int search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int st = 0, en = nums.size()-1;
        int mid = -1;
        while (st <= en) {
            mid = (st+en)/2;
            if (nums[mid] < target) st = mid+1;
            else if (nums[mid] > target) en = mid -1;
            else break;
        }

        int ans = (nums[mid] == target) ? mid : -1;
        return ans;
    }
};
