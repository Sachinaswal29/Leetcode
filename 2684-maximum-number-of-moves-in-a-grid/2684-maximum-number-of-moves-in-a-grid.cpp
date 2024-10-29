class Solution {
public:
    int m,n;
    vector<int>directions={-1,0,1};
    int dfs(vector<vector<int>>& grid, int row, int col, vector<vector<int>>& dp){
        if(dp[row][col] != -1) return dp[row][col];
        int moves = 0;
        for(auto& dir:directions){
            int newRow=row+dir;
            int newCol=col+1;
            if(newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && grid[newRow][newCol] > grid[row][col]){
                moves = max(moves, 1 + dfs(grid, newRow, newCol, dp));
            }
        }
        return dp[row][col] = moves;
    }
    
    int maxMoves(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        int moves = 0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            moves=max(moves,dfs(grid,i,0,dp));
        }
        return moves;
    }
};