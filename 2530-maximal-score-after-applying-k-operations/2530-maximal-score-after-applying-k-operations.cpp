class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq(nums.begin(),nums.end());
        long long score=0;
        while(k--){
            score+=pq.top();
            pq.push(ceil(pq.top()/3.0));
            pq.pop();
        }
        return score;
    }
};