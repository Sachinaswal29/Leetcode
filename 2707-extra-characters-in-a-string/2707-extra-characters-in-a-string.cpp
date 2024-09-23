class Solution {
public:
    int dp[51];
    int solve(int idx, string s, unordered_set<string>& dict){
        if(idx>=s.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int ans=1+solve(idx+1,s,dict);
        for(int i=idx;i<s.size();i++){
            if(dict.contains(s.substr(idx,i-idx+1))){
                ans=min(ans,solve(i+1,s,dict));
            }
        }
        return dp[idx]=ans;
    }
    
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_set<string>dict(dictionary.begin(),dictionary.end());
        memset(dp,-1,sizeof(dp));
        return solve(0,s,dict);
    }
};