class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        // TC-O(rows*cols)  SC-O(rows*cols)
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<vector<int>>dp(rows+1,vector<int>(cols+1,0));
        int ans=0;
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=cols;j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        return ans*ans;
    }
};