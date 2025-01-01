class Solution {
public:
    int maxScore(string s) {
        int zeroCount=0;
        int oneCount=count(s.begin(),s.end(),'1');
        int ans=0;

        for(int i=0;i<s.size()-1;i++){
            (s[i]=='0') ? zeroCount++ : oneCount--;
            ans=max(ans,zeroCount+oneCount);
        }
        return ans;
    }
};