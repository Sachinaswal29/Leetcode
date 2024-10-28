class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxLen=0;
        for(auto& num:nums){
            long long val=num;
            int len=0;
            while(st.contains(val)){
               len++;
               if(val*val>1e5) break;
               val=val*val;
            }
            maxLen=max(maxLen,len);
        }
        return maxLen>=2 ? maxLen : -1;
    }
};