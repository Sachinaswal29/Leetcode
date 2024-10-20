class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(),coins.end());
        int ans=1;
        for(auto& coin:coins){
            if(coin > ans) break;
            ans+=coin;
        }return ans;
    }
};