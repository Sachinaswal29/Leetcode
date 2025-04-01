class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> ans(n+1, 0);
        for(int i=n-1; i>=0 ;i--){
            int point = questions[i][0];
            int jump = questions[i][1];
            int nextQuestion = min(n, i+jump+1);
            ans[i] = max(ans[i+1], point + ans[nextQuestion]);
        }
        return ans[0];
    }
};