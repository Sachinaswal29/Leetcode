class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int sum=nums[0]+nums[1];
        int count=1;
        for(int i=2;i<nums.size()-1;i+=2){
            if(sum==(nums[i]+nums[i+1])) count++;
            else break;
        }
        return count;
    }
};