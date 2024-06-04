class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int>mp;
        for(auto ch:s) mp[ch]++;
        int cnt=0;
        for(auto x:mp){
            if(x.second%2) cnt++;
        }
        if(cnt>1) return s.size()-cnt+1;
        return s.size();
    }
};