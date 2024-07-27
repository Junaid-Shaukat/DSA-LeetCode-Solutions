class Solution {
public:
    void floodFillUtil(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor) {
        // Check for boundary conditions
        if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size()) {
            return;
        }
        
        // Check if the current pixel has the old color
        if (image[sr][sc] != oldColor) {
            return;
        }
        
        // Change the color of the current pixel
        image[sr][sc] = newColor;
        
        // Move to the neighboring pixels in the 4 directions (up, down, left, right)
        floodFillUtil(image, sr + 1, sc, newColor, oldColor);
        floodFillUtil(image, sr - 1, sc, newColor, oldColor);
        floodFillUtil(image, sr, sc + 1, newColor, oldColor);
        floodFillUtil(image, sr, sc - 1, newColor, oldColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        // Check if the new color is the same as the old color to avoid infinite loop
        if (oldColor == newColor) {
            return image;
        }
        floodFillUtil(image, sr, sc, newColor, oldColor);
        return image;
    }
};