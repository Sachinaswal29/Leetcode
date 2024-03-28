class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int i=0,j=0;
        int maxLength=0;
        int culprit=0;
        while(j<n){
            mp[nums[j]]++;
            if(mp[nums[j]] == k+1){
               culprit++;
            }
            if(culprit>0){
                mp[nums[i]]--;
                if(mp[nums[i]]==k) culprit--;
                i++;
            }
            if(culprit==0) maxLength=max(maxLength,j-i+1);
            j++;
        }
        return maxLength;
    }
};