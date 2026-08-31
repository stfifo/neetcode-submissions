class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (vector<int>&rows : matrix) {
            if (binary_search(rows.begin(), rows.end(), target)) {
                return true;
            }
        }

        return false; 
    }
};
