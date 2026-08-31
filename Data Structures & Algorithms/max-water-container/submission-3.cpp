class Solution {
public:
    int maxArea(vector<int>& heights) {

        int st = 0, len=heights.size()-1;
        int en = len;

        int mx = (en-st)*((int) min(heights[st], heights[en]));

        int tmp_left = heights[0];
        for (int i=0; i<len; i++) {
            if (i!=0 && tmp_left >= heights[i]) continue;
            tmp_left = heights[i];

            int tmp_right = heights[len];
            for (int j=len; i<j; j--) {
                if (j!=len && tmp_right >= heights[j]) continue;
                tmp_right = heights[j];

                int h = min(heights[i], heights[j]);
                mx = max(mx, (j-i)*h);
            }
        }
        
        return mx;
    }
};
