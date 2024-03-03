class Solution {
public:
    int n;
    int dp[201][201];
    int solve(vector<vector<int>>& triangle, int i, int j){
        if(i==n-1) return triangle[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int bottom=triangle[i][j]+solve(triangle,i+1,j);
        int bottom_right=triangle[i][j]+solve(triangle,i+1,j+1);
        return dp[i][j]=min(bottom,bottom_right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        n=triangle.size();
        memset(dp,-1,sizeof(dp));
        return solve(triangle,0,0);
    }
};