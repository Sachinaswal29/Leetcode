class Solution {
public:

    // //Recusion ->it will give TLE
    // int solve(vector<int>&nums,int idx){
    //     if(idx>=nums.size()) return 0;
    //     int steal=nums[idx]+solve(nums,idx+2);
    //     int skip=solve(nums,idx+1);
    //     return max(steal,skip);
    // }
    // int rob(vector<int>& nums) {
    //     return solve(nums,0);
    // }


    // //Recusion + memoization(top down)
    // int solve(vector<int>&nums,int idx,vector<int>&dp){
    //     if(idx>=nums.size()) return 0;
    //     if(dp[idx]!=-1) return dp[idx];
    //     int steal=nums[idx]+solve(nums,idx+2,dp);
    //     int skip=solve(nums,idx+1,dp);
    //     return dp[idx]=max(steal,skip);
    // }
    // int rob(vector<int>& nums) {
    //     vector<int>dp(401,-1);
    //     return solve(nums,0,dp);
    // }

    // // Tabular (Bottom up)
    // int rob(vector<int>& nums) {
    //     vector<int>dp(401,-1);
    //     dp[0]=0;
    //     dp[1]=nums[0];

    //     for(int i=2;i<=nums.size();i++){
    //         int steal=nums[i-1]+dp[i-2];
    //         int skip=dp[i-1];
    //         dp[i]=max(steal,skip);
    //     }
    //     return dp[nums.size()];
    // }
    

    // fully optamized
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        
        int prev2 = nums[0], prev =max(nums[0],nums[1]);
        for(int i=2;i<n;i++) {
            int cur=max(nums[i]+prev2,prev);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};