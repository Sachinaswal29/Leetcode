class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void solve(int start, int n, int k){
        if(k==0){
            ans.push_back(temp);
            return;
        }
        if(start>n) return;
        solve(start+1,n,k);
        temp.push_back(start);
        solve(start+1,n,k-1);
        temp.pop_back();
    }
    vector<vector<int>> combine(int n, int k) {
        solve(1,n,k);
        return ans;
    }
};