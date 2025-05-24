class Solution {
public:
     int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0); 
        int maxArea = 0;
        stack<pair<int, int>> st; 

        for (int i = 0; i < heights.size(); ++i) {
            int start = i;
            while (!st.empty() && st.top().first > heights[i]) {
                int height = st.top().first;
                int index = st.top().second;
                st.pop();
                maxArea = max(maxArea, height * (i - index));
                start = index;  
            }
            st.push({heights[i], start});
        }

        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int area=0;
        if (matrix.empty() || matrix[0].empty()) return 0;

        int cols = matrix[0].size();
        vector<int> heights(cols, 0);
        

        for (const auto& row : matrix) {
            for (int i = 0; i < cols; ++i) {
                if (row[i] == '1') {
                    heights[i] += 1;
                } else {
                    heights[i] = 0;
                }
            }
            area = max(area, largestRectangleArea(heights));
        }

        return area;

    }
};