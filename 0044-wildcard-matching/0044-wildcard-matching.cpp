class Solution {
public:
    vector<vector<int>>dp;
    int solve(string& p, string& s, int i, int j){
        if(i==p.size() && j==s.size()) return 1;
        if(i==p.size()) return 0;
        if(j==s.size() && p[i]=='*') return solve(p,s,i+1,j);
        if(j==s.size()) return 0;
        if(p[i]!='?' && p[i]!='*' && p[i]!=s[j]) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ones=0,empty=0,multiple=0;
        if(p[i]=='*'){
            empty=solve(p,s,i+1,j);
            multiple=solve(p,s,i,j+1);
        }
        ones=solve(p,s,i+1,j+1);
        return dp[i][j]=ones|empty|multiple;
    }
    bool isMatch(string s, string p) {
        dp.resize(p.size()+1,vector<int>(s.size()+1,-1));
        return solve(p,s,0,0);
    }
};