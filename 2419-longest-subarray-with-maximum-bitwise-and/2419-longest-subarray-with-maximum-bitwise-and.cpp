class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int maxLen=0,currLen=0;
        for(auto& el:nums){
            if(el==maxi) maxLen=max(maxLen,++currLen);
            else currLen=0;
        }
        return maxLen;
    }
};