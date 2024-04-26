class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>& grid, int row, int col){
       if(row==grid.size()-1) return dp[row][col]=grid[row][col];
       if(dp[row][col]!=-1) return dp[row][col];
       int mini=INT_MAX;
       for(int i=0;i<grid.size();i++){
           if(i!=col){
            mini=min(mini,grid[row][col]+solve(grid,row+1,i));
        }
       }
       return dp[row][col]=mini;
    }
    
    int minFallingPathSum(vector<vector<int>>& grid) {
        int ans=INT_MAX;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<grid.size();i++){
            ans=min(ans,solve(grid,0,i));
        }
        return ans;
    }
};