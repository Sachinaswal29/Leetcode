class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k) return false;
        map<int,int>mp;
        for(auto x:nums) mp[x]++;
        for(auto [el,freq]:mp){
            if(freq==0) continue;
            while(freq--){
                for(auto i=el;i<el+k;i++){
                    if(mp[i]==0) return false;
                    mp[i]--;
                }
            }
        }
        return true;
    }
};