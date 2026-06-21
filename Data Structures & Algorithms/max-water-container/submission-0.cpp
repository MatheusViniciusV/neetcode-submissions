class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;

        for(int i = 0; i < heights.size() - 1; i++)
        for(int j = 1; j < heights.size(); j++)
        {
            result = max(result, min(heights[i], heights[j]) * (j - i));
        }

        return result;
    }
};
