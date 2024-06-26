class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        int i=0,j=0;
        long long ans=0;
        int maxCount=0;
        while(j<n){
            if(nums[j]==maxi) maxCount++;
            while(maxCount>=k){
               ans+=n-j;
               if(nums[i]==maxi) maxCount--;
               i++;
            }
            j++;
        }
        return ans;
    }
};