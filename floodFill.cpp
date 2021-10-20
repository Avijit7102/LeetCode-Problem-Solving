class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor)
        {
            return image;
        }
        dsf(image, sr, sc, image[sr][sc], newColor);
        return image;
    }

    void dsf(vector<vector<int>>& image, int i, int j, int color, int newColor)
    {
        if(i < 0 || i >= image.size() || j < 0 || j >= image[i].size() || image[i][j] != color)
        {
            return;
        }
        image[i][j] = newColor;
        dsf(image, i+1, j, color, newColor);
        dsf(image, i-1, j, color, newColor);
        dsf(image, i, j+1, color, newColor);
        dsf(image, i, j-1, color, newColor);
    }
};
