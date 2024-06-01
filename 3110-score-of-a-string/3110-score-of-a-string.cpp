class Solution {
public:
    int scoreOfString(string s) {
        int totalScore=0;
        for(int i=0;i<s.size()-1;i++){
            totalScore+=abs(s[i]-s[i+1]);
        }
        return totalScore;
    }
};