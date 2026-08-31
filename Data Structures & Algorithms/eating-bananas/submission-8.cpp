class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int st = 1, en = *max_element(piles.begin(), piles.end());
        if (piles.size() == h) return en;

        while (st < en) {
            int mid = (st + en) / 2;

            if (cal_hour(piles, mid, h)) en = mid;
            else st = mid+1;
        }

        return st;
    }

    bool cal_hour(vector<int>& vec, int available, int h) {
        int total_h = 0;
        for (auto& v: vec) {
            int cnt = v % available == 0 ? v/available : v/available + 1;
            total_h += cnt;
        }
        return total_h <= h;
    }
};
