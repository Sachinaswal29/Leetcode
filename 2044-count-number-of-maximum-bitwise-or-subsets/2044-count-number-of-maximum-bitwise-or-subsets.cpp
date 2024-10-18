class Solution {
public:
    int solve(vector<int>& nums, int idx, int currOR, int &maxOR, vector<vector<int>>& dp){
        if(idx>=nums.size()){
            if(currOR==maxOR) return 1;
            return 0;
        }
        if(dp[idx][currOR]!=-1) return dp[idx][currOR];
        return dp[idx][currOR]=solve(nums,idx+1,currOR,maxOR,dp) + solve(nums,idx+1,currOR|nums[idx],maxOR,dp);
    }

    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR=0,count=0;
        for(auto &x:nums) maxOR|=x;
        vector<vector<int>>dp(nums.size()+1,vector<int>(maxOR+1,-1));
        return solve(nums,0,0,maxOR,dp);
    }
};