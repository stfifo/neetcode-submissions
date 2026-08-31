class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       map<int,int> mapNum;
        for (auto& n : nums) {
            mapNum[n]++;
            if (mapNum[n] > 1) return true;
        }
       
       return false;
    }
};