class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq(piles.begin(),piles.end());
        while(k--){
            pq.push(ceil(pq.top()/2.0));
            pq.pop();
        }
        int ans=0;
        while(!pq.empty()) ans+=pq.top(),pq.pop();
        return ans;
    }
};