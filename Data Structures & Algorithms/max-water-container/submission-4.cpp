class Solution {
public:
    int maxArea(vector<int>& heights) {

        int st = 0, len=heights.size()-1;
        int en = len;

        int mx = -1;

        while (st < en) {
            int h = min(heights[st], heights[en]);
            mx = max(mx, (en-st)*h);

            if (heights[st] < heights[en]) st++;
            else if (heights[st] > heights[en]) en--;
            else {
                st++; en--;
            }
        }
        
        return mx;
    }
};
