class Solution {
public:
    int m,n;
    int dfs(vector<vector<int>>& grid, int row, int col, vector<vector<int>>& dp){
        if(dp[row][col] != -1) return dp[row][col];
        if(col == n) return 0;
        int right = 0,upRight = 0,downRight = 0;
        if(col+1 < n && row-1 >= 0 && grid[row][col] < grid[row-1][col+1]) upRight = 1 + dfs(grid,row-1,col+1,dp);
        if(col+1 < n && grid[row][col] < grid[row][col+1]) right = 1 + dfs(grid,row,col+1,dp);
        if(row+1 < m && col+1 < n && grid[row][col] < grid[row+1][col+1]) downRight = 1 + dfs(grid,row+1,col+1,dp);
        return dp[row][col] = max({upRight, right, downRight});
    }
    
    int maxMoves(vector<vector<int>>& grid) {
        m = grid.size(),n = grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int moves = 0;
        for(int i=0;i<m;i++){
            moves=max(moves,dfs(grid,i,0,dp));
        }
        return moves;
    }
};