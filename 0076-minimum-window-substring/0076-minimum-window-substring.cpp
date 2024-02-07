class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length()) return "";

        unordered_map<char,int>um;
        for(auto ch:t) um[ch]++;

        int i=0,j=0;
        int start=0;
        int requiredCount=t.size();
        int minWindowSize=INT_MAX;

        while(j<s.size()){
            if(um[s[j]]>0) requiredCount--;
            um[s[j]]--;
    
            while(requiredCount==0){
                int currWindowSize=j-i+1;
                if(minWindowSize > currWindowSize){
                    minWindowSize=currWindowSize;
                    start=i;
                }
                um[s[i]]++;
                if(um[s[i]]>0) requiredCount++;
                i++;
            }
            j++;
        }

        return minWindowSize==INT_MAX? "" : s.substr(start,minWindowSize);
    }
};