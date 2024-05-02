class Solution {
public:
    int findMaxK(vector<int>& nums) {
       unordered_set<int>st;
       int ans=-1;
       for(auto& el:nums){
           if(st.contains(-el)) ans=max(ans,abs(el));
           st.insert(el);
       }
       return ans;
    }
};