class Solution {
public:
    bool doesAliceWin(string s) {
        unordered_set<char>vowels={'a','e','i','o','u'};
        for(auto ch:s){
            if(vowels.contains(ch)) return 1;
        }
        return 0;
    }
};