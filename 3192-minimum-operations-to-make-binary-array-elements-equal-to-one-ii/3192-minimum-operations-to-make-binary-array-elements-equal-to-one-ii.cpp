class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(),ans=0;
        int flips=0;
        for(int i=0;i<n;i++){
           if(nums[i]==0 && flips%2==0 || nums[i]==1 && flips%2) flips++;
        }
        return flips;
    }
};