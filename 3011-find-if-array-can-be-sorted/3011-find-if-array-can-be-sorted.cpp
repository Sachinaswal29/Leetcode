class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        for(int i=1;i<=nums.size();i++){
            bool isSwapped=false;
            for(int j=0;j<nums.size()-i;j++){
                if(nums[j]<=nums[j+1]) continue;
                if(nums[j]>nums[j+1] && __builtin_popcount(nums[j])==__builtin_popcount(nums[j+1])){
                    swap(nums[j],nums[j+1]);
                    isSwapped=true;
                }else return false;
            }
            if(!isSwapped) break;
        }
        return true;
    }
};