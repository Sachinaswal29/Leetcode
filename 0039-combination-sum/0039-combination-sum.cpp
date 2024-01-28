class Solution {
private:
    vector<int>temp;
    vector<vector<int>>ans;
    void solve(int index,vector<int>& candidates, int target){
        if(index>=candidates.size()||target<0) return;
        if(target==0){
            ans.push_back(temp);
            return;
        }
        solve(index+1,candidates,target);
        temp.push_back(candidates[index]);
        solve(index,candidates,target-candidates[index]);
        temp.pop_back();
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(0,candidates,target);
        return ans;
    }
};