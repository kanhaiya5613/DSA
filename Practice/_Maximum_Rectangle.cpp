#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxi = 0;
        int n = heights.size();

        for(int i = 0; i <= n; i++) {
            int currentHeight = (i == n) ? 0 : heights[i];

            while(!st.empty() && heights[st.top()] >= currentHeight) {
                int height = heights[st.top()];
                st.pop();

                int width;
                if(st.empty()) width = i;
                else width = i - st.top() - 1;

                maxi = max(maxi, width * height);
            }
            st.push(i);
        }
        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;

        int n = matrix.size();
        int m = matrix[0].size();
        int maxArea = 0;

        vector<int> Histo(m, 0);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == '1') Histo[j]++;
                else Histo[j] = 0;
            }
            int area = largestRectangleArea(Histo);
            maxArea = max(area, maxArea);
        }
        return maxArea;
    }
};

int main() {
    Solution obj;

    // Example matrix input
    vector<vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };

    int result = obj.maximalRectangle(matrix);

    cout << "Maximal Rectangle Area: " << result << endl;

    return 0;
}
