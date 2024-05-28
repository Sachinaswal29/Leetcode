class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i=0,j=0,maxLen=INT_MIN,curCost=0;
        while(j<s.size()){
            curCost+=abs(s[j]-t[j]);
            while(i<s.size() && curCost>maxCost){
                curCost-=abs(s[i]-t[i]);
                i++;
            }
            maxLen=max(maxLen,j-i+1);
            j++;
        }
        return maxLen;
    }
};