class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int maxLength=0;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1==nums[i]) count++;
            else if(nums[i]!=nums[i-1]){
                maxLength=max(count,maxLength);
                count=1;
            }
        }
        return max(maxLength,count);
    }
};