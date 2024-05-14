class Solution {
public:
    int solve(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& directions){
        if(i<0 || i>=grid.size() || j<0 ||j>=grid[0].size() || grid[i][j]==0) return 0;
        int temp=grid[i][j];
        grid[i][j]=0;
        int maxi=0;
        for(auto& dir:directions){
            int new_i=i+dir[0];
            int new_j=j+dir[1];
            maxi=max(maxi,solve(grid,new_i,new_j,directions));
        }
        grid[i][j]=temp;
        return maxi+grid[i][j];
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=0;
        vector<vector<int>>directions{{-1,0},{0,1},{0,-1},{1,0}};
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]!=0) ans=max(ans,solve(grid,i,j,directions));
            }
        }
        return ans;
    }
};