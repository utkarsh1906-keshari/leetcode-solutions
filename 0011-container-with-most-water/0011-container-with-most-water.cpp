class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int MaxArea = 0;

        while (i < j) {
            MaxArea = max(min(height[i], height[j]) * (j - i), MaxArea);

            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }

        return MaxArea;
    }
};