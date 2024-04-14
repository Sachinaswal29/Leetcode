class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        // TC-O(rows*cols)  SC-O(rows*cols)
        // int rows=matrix.size();
        // int cols=matrix[0].size();
        // vector<vector<int>>dp(rows+1,vector<int>(cols+1,0));
        // int ans=0;
        // for(int i=1;i<=rows;i++){
        //     for(int j=1;j<=cols;j++){
        //         if(matrix[i-1][j-1]=='1'){
        //             dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
        //             ans=max(ans,dp[i][j]);
        //         }
        //     }
        // }
        // return ans*ans;
        
        // TC-O(rows*cols)  SC-O(cols)
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<int>prevdp(cols+1,0),dp(cols+1,0);
        int ans=0;
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=cols;j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[j]=min({prevdp[j],dp[j-1],prevdp[j-1]})+1;
                    ans=max(ans,dp[j]);
                }else dp[j]=0;
            }
            prevdp=dp;
        }
        return ans*ans;
    }
};