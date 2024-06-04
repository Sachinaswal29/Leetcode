class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> letters(52, 0);
        for(int i = 0; i < s.length(); i++){
            if(s[i] <= 'Z') letters[s[i] -'A' ]++;
            else letters[s[i] -'a' + 26]++;
        }
        int cnt=0;
        for(int i = 0; i < 52; i++){
            if(letters[i] % 2 ) cnt++;
        }
        if(cnt>1) return s.size()-cnt+1;
        return s.size();
    }
};