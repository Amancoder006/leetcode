class Solution {
public:
    void dfs(vector<vector<int>>& g, int i, int j,int newColor,int oldColor){
        int n=g.size();
        int m=g[0].size();
        if(i<0||j<0||i>=n||j>=m)return;
        if(g[i][j]!=oldColor)return;
        g[i][j]=newColor;
        dfs(g,i,j+1,newColor,oldColor);
        dfs(g,i,j-1,newColor,oldColor);
        dfs(g,i+1,j,newColor,oldColor);
        dfs(g,i-1,j,newColor,oldColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& g, int sr, int sc, int newColor) {
        
        int oldColor=g[sr][sc];
        if(oldColor!=newColor)dfs(g,sr,sc,newColor,oldColor);
        return g;
    }
};