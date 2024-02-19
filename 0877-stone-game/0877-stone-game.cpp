class Solution {
public:
    int dp[501][501];
    int solve(vector<int>& piles, int i, int j){
        if(i>j) return 0;
        if(i==j) return piles[i];
        if(dp[i][j]!=-1) return dp[i][j];
        int take_i=piles[i]-solve(piles,i+1,j);
        int take_j=piles[j]-solve(piles,i,j-1);
        return dp[i][j]=max(take_i,take_j);
    }
    bool stoneGame(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        return solve(piles,0,piles.size()-1)>0; 
    }
};