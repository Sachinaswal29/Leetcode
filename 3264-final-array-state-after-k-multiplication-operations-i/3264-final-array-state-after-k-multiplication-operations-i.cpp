class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
         priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
         for(auto i = 0; i < nums.size(); ++i) pq.push({nums[i], i});
         for(int i = 0; i < k; ++i){
            auto [num, ind] = pq.top(); pq.pop();
            nums[ind] = num * multiplier;
            pq.push({nums[ind], ind});
         }
         return nums;
    }
};