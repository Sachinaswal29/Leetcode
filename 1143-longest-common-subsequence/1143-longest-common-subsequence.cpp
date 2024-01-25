class Solution {
public:
    int solve(string& s1,int i,string& s2,int j,vector<vector<int>>&dp){
        if(i==s1.size() ||j==s2.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        int ans=0;
        if(s1[i]==s2[j]) ans=1+solve(s1,i+1,s2,j+1,dp);
        else ans=max(solve(s1,i+1,s2,j,dp),solve(s1,i,s2,j+1,dp));
    
        return dp[i][j]=ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size(),vector<int>(text2.size(),-1));
        return solve(text1,0,text2,0,dp);
    }
};