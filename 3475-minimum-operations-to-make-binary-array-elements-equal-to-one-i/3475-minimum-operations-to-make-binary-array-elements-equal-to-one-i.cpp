class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n-2;i++){
            if(nums[i]) continue;
            for(int j=i;j<=i+2;j++){
                nums[j]=nums[j]^1;
            }
            ans++;
        }
        if(nums[n-1]==0 || nums[n-2]==0) return -1;
        return ans;
    }
};