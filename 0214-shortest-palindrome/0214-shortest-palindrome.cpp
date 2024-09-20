class Solution {
public:
    string shortestPalindrome(string s) {
        string rev_s=s;
        reverse(rev_s.begin(),rev_s.end());
        string str=s+"S"+rev_s;

        vector<int>lps(str.size(),0);
        int pref=0,suff=1;
        while(suff<str.size()){
            if(str[pref]==str[suff]){
                lps[suff]=pref+1;
                pref++,suff++;
            }else{
                if(pref==0){
                    suff++;
                }
                else{
                    pref=lps[pref-1];
                }
            }
            
        }

        string remainingString=s.substr(lps.back());
        reverse(remainingString.begin(),remainingString.end());
        return remainingString+s;
    }
};