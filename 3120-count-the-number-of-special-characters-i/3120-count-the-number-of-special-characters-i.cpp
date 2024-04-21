class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>lower(26,0),upper(26,0);
        for(auto ch:word){
            if(islower(ch)) lower[ch-'a']++;
            else upper[ch-'A']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(lower[i] && upper[i]) ans++;
        }
        return ans;
    }
};