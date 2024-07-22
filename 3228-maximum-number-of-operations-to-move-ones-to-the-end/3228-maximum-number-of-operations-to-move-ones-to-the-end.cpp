class Solution {
public:
    int maxOperations(string s) {
        reverse(s.begin(),s.end());
        int n=s.size(),startIndex=n;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                startIndex=i;
                break;
            }
        }
        int ans=0,impact=1;
        for(int i=startIndex;i<n;i++){
            if(s[i]=='0') continue;
            int count=0;
            while(s[i]=='1'){
                count++;
                i++;
            }
            i--;
            ans+=count*impact;
            impact++;
        }
        return ans;
    }
};