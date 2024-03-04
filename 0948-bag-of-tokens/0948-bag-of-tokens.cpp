class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;
        int maxScore=0;
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i++];
                score++;
                maxScore=max(maxScore,score);
            }
            else if(score>0){
                power+=tokens[j--];
                score--;
            }
            else return maxScore;
        }return maxScore;
    }
};