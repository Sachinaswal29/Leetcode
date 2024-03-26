class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool one=false;
        int maxNum=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) one=true;
            if(nums[i]<=0 || nums[i]>maxNum) nums[i]=1;
        }
    
        if(!one) return 1;
        for(int i=0;i<nums.size();i++){
            int num=abs(nums[i]);
            int idx=num-1;
            if(nums[idx]>0)nums[idx]*=-1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) return i+1;
        }
        return maxNum+1;
    }
};