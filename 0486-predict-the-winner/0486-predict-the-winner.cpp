class Solution {
public:
    int dp[21][21];
    int gameWinner(vector<int>& nums, int start, int end){
        if(start>end) return 0;
        if(start==end) return nums[start];
        if(dp[start][end]!=-1) return dp[start][end];
        int takeStart=nums[start]+min(gameWinner(nums,start+2,end),gameWinner(nums,start+1,end-1));
        int takeEnd=nums[end]+min(gameWinner(nums,start,end-2),gameWinner(nums,start+1,end-1));
        return dp[start][end]=max(takeStart,takeEnd);
    }

    bool predictTheWinner(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int totalScore=accumulate(nums.begin(),nums.end(),0);
        int scoreOfFirstPlayer=gameWinner(nums,0,nums.size()-1);
        int scoreOfSecondPlayer=totalScore-scoreOfFirstPlayer;
        return scoreOfFirstPlayer>=scoreOfSecondPlayer;
    }
};