class Solution {
public:
    int findMin(vector<int> &nums) {
        int st = 0, en = nums.size()-1;
        int mid;

        while (st <= en) {
            mid = (st + en) / 2;
            int st_ = nums[st], en_ = nums[en], mid_ = nums[mid];
            if (mid_ > en_) st = mid + 1;
            else if (mid_ < en_) en = mid;
            else return mid_;
        }
        return nums[mid];
    }
};
