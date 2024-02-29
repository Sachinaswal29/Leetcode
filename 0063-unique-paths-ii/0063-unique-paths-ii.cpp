class Solution {
public:
    int row=0;
    int col=0;
    int dp[101][101];
    int solve(vector<vector<int>>& obstacleGrid, int i, int j, int row, int col){
        if(i>=row || j>=col || obstacleGrid[i][j]==1) return 0;
        if(i==row-1 && j==col-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int right=solve(obstacleGrid,i+1,j,row,col);
        int down=solve(obstacleGrid,i,j+1,row,col);
        return dp[i][j]=right+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        row=obstacleGrid.size();
        col=obstacleGrid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(obstacleGrid,0,0,row,col);
    }
};