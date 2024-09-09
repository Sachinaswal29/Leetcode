class Solution {
public:
    // Top dowm
    int maxRob(vector<int>& nums,int idx,int n,vector<int>&dp){
        if(idx>n) return 0;
        if(dp[idx]!=-1) return dp[idx];

        int steal=nums[idx]+maxRob(nums,idx+2,n,dp);
        int skip=maxRob(nums,idx+1,n,dp);

        return dp[idx]=max(steal,skip);
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        // if(n==2) return max(nums[0],nums[1]);

        // vector<int>dp1(101,-1);
        // int start_From_First_House=maxRob(nums,0,n-2,dp1);

        // vector<int>dp2(101,-1);
        // int start_From_Second_House=maxRob(nums,1,n-1,dp2);

        // return max(start_From_First_House,start_From_Second_House);

        // Bottom up
        vector<int>dp(n+1,-1);
        dp[0]=0;
        int maxi1=0,maxi2=0;
        for(int i=1;i<=n-1;i++){
            dp[i]=max(nums[i-1]+(i-2>=0?dp[i-2]:0),dp[i-1]);
        }
        maxi1=dp[n-1];
        dp.clear();
        dp[0]=dp[1]=0;
        for(int i=2;i<=n;i++){
            dp[i]=max(nums[i-1]+(i-2>=0?dp[i-2]:0),dp[i-1]);
        }
        maxi2=dp[n];
        return max(maxi1,maxi2);
    }
};
