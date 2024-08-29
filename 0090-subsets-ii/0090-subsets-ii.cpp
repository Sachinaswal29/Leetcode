class Solution {
public:
    void solve(vector<int>& nums, int idx, vector<int>& temp, set<vector<int>>& st){
        if(idx==nums.size()){
            st.insert(temp);
            return;
        }
        solve(nums,idx+1,temp,st);
        temp.push_back(nums[idx]);
        solve(nums,idx+1,temp,st);
        temp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>st;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        solve(nums,0,temp,st);
        vector<vector<int>>ans;
        for(auto& x:st) ans.push_back(x);
        return ans;
    }
};