class Solution {
public:
    vector<vector<int>>directions={{0,1},{1,0},{0,-1},{-1,0}};
    bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j){
        if(i<0 || i>=grid1.size() || j<0 || j>=grid1[0].size() || grid2[i][j]!=1) return true;
        grid2[i][j]=0;
        bool ans=grid1[i][j]==1;
        for(auto &dir:directions){
            ans= ans & dfs(grid1,grid2,i+dir[0],j+dir[1]);
        }
        return ans;
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int count=0;
        for(int i=0;i<grid2.size();i++){
            for(int j=0;j<grid2[0].size();j++){
                if(grid2[i][j]==1 && dfs(grid1,grid2,i,j)) count++;
            }
        }
        return count;
    }
};