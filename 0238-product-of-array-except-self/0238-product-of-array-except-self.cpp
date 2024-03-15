class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, zeroCnt = count(begin(nums), end(nums), 0);
        if(zeroCnt > 1) return vector<int>(size(nums));              
        for(int i=0;i<nums.size();i++){
            if(nums[i]) prod*=nums[i];
        }                                     
        for(int i=0;i<nums.size();i++){
            if(zeroCnt) nums[i] = nums[i] ? 0 : prod;                             
            else nums[i] = prod / nums[i]; 
        }                                       
        return nums;
    }
};