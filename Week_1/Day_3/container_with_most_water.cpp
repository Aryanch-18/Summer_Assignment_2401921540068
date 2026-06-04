class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int lp = 0;
        int rp = height.size() - 1;
        while (lp < rp) {
            int width = rp - lp;
            int heightt = min(height[lp] , height[rp]);
            int currarea = width * heightt;
            maxarea = max(maxarea, currarea);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxarea;
    }
};
