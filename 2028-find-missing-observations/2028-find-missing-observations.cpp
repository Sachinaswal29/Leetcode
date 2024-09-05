class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int sum=accumulate(rolls.begin(),rolls.end(),0);
        int lostSum=mean*(n+m)-sum;
        if(lostSum<n || lostSum>n*6) return {};
        int rem=lostSum%n;
        vector<int>ans(n,lostSum/n);
        for(int i=0;i<rem;i++){
            ans[i]++;
        }
        return ans;
    }
};