class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<long>st;
        int i=0,j=0;
        long long sum=0,ans=0;
        while(j<n){
            while(st.contains(nums[j])){
                sum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            sum+=nums[j];
            if(j-i+1==k){
                ans=max(ans,sum);
                sum-=nums[i];
                st.erase(nums[i++]);
            }
            st.insert(nums[j]);
            j++;
        }
        return ans;
    }
};