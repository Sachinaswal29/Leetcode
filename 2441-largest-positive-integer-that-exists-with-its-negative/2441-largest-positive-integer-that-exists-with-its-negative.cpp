class Solution {
public:
    int findMaxK(vector<int>& nums) {
       unordered_set<int>negative;
       for(auto& el:nums){
           if(el<0) negative.insert(el);
       }
       int ans=-1;
       for(auto& el:nums){
           if(el>0 && el>ans && negative.contains(-el)) ans=el;
       }
       return ans;
    }
};