class Solution {
public:
    int solve(string &s, int i,int j){
        while(i<j){
          if(s[i]!=s[j]) return 0;
          else i++,j--;
        }
        return 1;
    }
    string longestPalindrome(string s) {
        if(s.length()<2) return s;
        int startIndex=0;
        int maxLen=INT_MIN;
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