class Solution {
public:
    void solve(vector<int>& nums, int idx, int currOR, int &maxOR, int &count){
        if(idx>=nums.size()){
            if(currOR==maxOR) count++;
            return;
        }
        solve(nums,idx+1,currOR,maxOR,count);
        solve(nums,idx+1,currOR|nums[idx],maxOR,count);
    }

    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR=0,count=0;
        for(auto &x:nums) maxOR|=x;
        solve(nums,0,0,maxOR,count);
        return count;
    }
};