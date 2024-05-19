class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long maxSum=0;
        int count=0;
        long long minDiff=INT_MAX;
        for(long long el:nums){
            if((el^k)>el) {
                maxSum+=el^k;
                count++;
            }
            else {
                maxSum+=el;
            }
            minDiff=min(minDiff,abs(el-(el^k)));
        }
        if(count%2) return maxSum-minDiff;
        return maxSum;
    }
};