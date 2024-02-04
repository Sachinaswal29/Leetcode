class Solution {
public:
    int dp[1001][1001];
    
    bool solve(string &s, int i,int j){
       if(i>=j) return true;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==s[j]) return dp[i][j]=solve(s,++i,--j);
        return dp[i][j]=0;
    }
    
    string longestPalindrome(string s) {
        if(s.length()<2) return s;
        int startIndex=0;
        int maxLen=INT_MIN;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
               if(solve(s,i,j)){
                  if(j-i+1>maxLen){
                    maxLen=j-i+1;
                    startIndex=i;
                  }
                }
            }        
        }
        return s.substr(startIndex,maxLen);
    }
};