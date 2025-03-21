class Solution {
public:
    int n;
    vector<vector<int>> dp;
    int solve(int i, int j, string& s){       
        if (dp[i][j]!=-1) return dp[i][j];
        if (i==j) return dp[i][j]=1;
        int ans;
        if (s[i]==s[j]||s[j-1]==s[j]) ans=solve(i, j-1, s);
        else if (s[i]==s[i+1]) ans=solve(i+1, j, s);
        else{
            ans=solve(i,j-1, s)+1;
            for(int k=i+1; k<j; k++){
                if(s[k]==s[j])
                    ans=min(ans, solve(i, k-1, s)+solve(k, j-1, s));
            }
        }
        return dp[i][j]=ans;
    }
    int strangePrinter(string s) {
        n=s.size();
        dp.assign(n, vector<int>(n, -1));
        return solve(0, n-1, s);
    }
};