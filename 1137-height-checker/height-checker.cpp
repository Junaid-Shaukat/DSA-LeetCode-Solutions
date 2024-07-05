class Solution {
public:
    int heightChecker(vector<int>& heights) {
            // Copy the heights array to get the expected order
    std::vector<int> expected = heights;
    
    // Sort the expected array to get the non-decreasing order
    std::sort(expected.begin(), expected.end());
    
    // Count the number of indices where heights[i] != expected[i]
    int count = 0;
    for (int i = 0; i < heights.size(); ++i) {
        if (heights[i] != expected[i]) {
            ++count;
        }
    }
    
    return count;
    }
};