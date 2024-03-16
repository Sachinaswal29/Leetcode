class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>um;
        int curSum=0;
        int maxLength=0;
        um[0]=-1;
        for(int i=0;i<nums.size();i++){
            curSum+=(nums[i]==0)?-1:1;
            if(um.find(curSum)!=um.end()){
               maxLength=max(maxLength,i-um[curSum]);
            }
            else um[curSum]=i;
        }
        return maxLength;
    }
};