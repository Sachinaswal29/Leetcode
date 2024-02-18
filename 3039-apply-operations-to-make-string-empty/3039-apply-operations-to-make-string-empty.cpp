class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char,int>freq;
        int maxFreq=0;
        for(auto ch:s){
            maxFreq=max(maxFreq,++freq[ch]);
        }
        unordered_map<char,int>curFreq;
        string ans="";
        for(auto ch:s){
            if(++curFreq[ch]==maxFreq) ans.push_back(ch);
        }
        return ans;
    }
};