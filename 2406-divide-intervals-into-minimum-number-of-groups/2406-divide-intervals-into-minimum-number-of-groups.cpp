class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto x:intervals){
            int left=x[0];
            int right=x[1];
            if(!pq.empty() && pq.top()<left) pq.pop();
            pq.push(right);
        }
        return pq.size();
    }
};