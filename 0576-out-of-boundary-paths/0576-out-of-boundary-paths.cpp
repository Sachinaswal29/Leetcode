class Solution {
public:
    vector<vector<int>>directions{{0,1},{1,0},{-1,0},{0,-1}};
    int dp[51][51][51];
    int solve(int row,int col,int m,int n,int maxMove){
        if(row<0 || row>=m || col<0 || col>=n) return 1;
        if(maxMove<=0) return 0;
        if(dp[row][col][maxMove]!=-1) return dp[row][col][maxMove];
        int ans=0;
        for(auto dir:directions){
            int new_Row=row+dir[0];
            int new_Col=col+dir[1];
            ans=(ans+solve(new_Row,new_Col,m,n,maxMove-1))%1000000007;
        }
        return dp[row][col][maxMove]=ans;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return solve(startRow,startColumn,m,n,maxMove);
    }
};