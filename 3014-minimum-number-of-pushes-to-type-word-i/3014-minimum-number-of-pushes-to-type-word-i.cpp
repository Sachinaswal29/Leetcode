class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int push=1;
        int quotient=n/8;
        int remainder=n%8;
        int ans=0;
        while(quotient--){
            ans+=8*push;
            push++;
        }
        ans+=remainder*push;
        return ans;
    }
};