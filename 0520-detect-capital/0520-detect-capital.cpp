class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital=0;
        for(auto ch:word){
            if(isupper(ch))capital++;
        }
        if(capital==0 || capital==word.size() || capital==1 && isupper(word[0])) return true;
        else return false;
    }
};