class Solution {
public:
    int n;
    unordered_set<string>st;
    int dp[301];
    bool solve(int idx, string &s){
        if(idx==n) return true;
        if(dp[idx]!=-1) return dp[idx];
        if(st.find(s)!=st.end()) return true;
        for(int len=1;len<=n;len++){
            if(st.find(s.substr(idx,len))!=st.end() && solve(idx+len,s)) return dp[idx]=true;
        }
        return dp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        n=s.size();
        memset(dp,-1,sizeof(dp));
        for(auto word:wordDict) st.insert(word);
        return solve(0,s);
    }
};