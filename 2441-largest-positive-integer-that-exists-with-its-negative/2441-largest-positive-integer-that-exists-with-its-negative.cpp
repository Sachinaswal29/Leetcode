class Solution {
public:
    int findMaxK(vector<int>& nums) {
       vector<bool>visited(2001,false);
       int ans=-1;
       for(auto& el:nums){
           if(visited[-el+1000]) ans=max(ans,abs(el));
           visited[el+1000]=true;
       }
       return ans;
    }
};