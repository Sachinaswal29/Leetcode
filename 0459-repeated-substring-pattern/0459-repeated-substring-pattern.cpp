class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length(), pref= 0, suff = 1; 
        vector<int> lps(n, 0); 
       
        while(suff < s.size()){ 
            if(s[pref] == s[suff]){ 
                lps[suff] = pref+1; 
                pref++; 
                suff++; 
            } 
            else{ 
                if(pref==0) suff++; 
                else pref = lps[pref-1];   
            } 
        } 
        int len=lps[n-1];
        return len>0 && !(n %(n-len));
    }
};