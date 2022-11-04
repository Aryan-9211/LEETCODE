class Solution {
public:
    void dfs(vector<vector<int>>& image, int i , int j, int icolor, int color){
        if(i < 0 || j < 0) return;
        int m = image.size(); 
        int n = image[0].size();
        if(i >= m || j >= n) return;
        
        if(image[i][j] != icolor) return;
        
        image[i][j] = color;
        
        dfs(image, i + 1, j, icolor, color);
        dfs(image, i - 1, j, icolor, color);
        dfs(image, i, j + 1, icolor, color);
        dfs(image, i, j - 1, icolor, color);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) { 
        int icolor = image[sr][sc];
        if(icolor != color) dfs(image, sr, sc, icolor, color);
        return image;
    }
};