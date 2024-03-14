class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>um;
        um[0]=1;
        int curSum=0;
        int ans=0;
        for(auto &el:nums){
           curSum+=el;
           if(um.find(curSum-goal)!=um.end()) ans+=um[curSum-goal];
           um[curSum]++;
        }
        return ans;
    }
};