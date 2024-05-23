class Solution {
private:
    void solve(vector<int>& nums, int k, unordered_map<int,int>& mp, int idx, int& ans){
        if(idx>=nums.size()){
            ans++;
            return;
        }
        solve(nums,k,mp,idx+1,ans);
        if(!mp[nums[idx]+k] && !mp[nums[idx]-k]){
            mp[nums[idx]]++;
            solve(nums,k,mp,idx+1,ans);
            mp[nums[idx]]--;
        }
    }
    
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
        solve(nums,k,mp,0,ans);
        return ans-1;
    }
};