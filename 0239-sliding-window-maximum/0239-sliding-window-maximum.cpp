class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //Using deque
        // deque<int>dq;
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     while(!dq.empty() && nums[dq.back()]<nums[i]) dq.pop_back();
        //     while(!dq.empty() && dq.front()<=i-k) dq.pop_front();
        //     dq.push_back(i);
        //     if(i>=k-1) ans.push_back(nums[dq.front()]);
        // }
        // return ans;

        //Using priority_queue 
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            while(!pq.empty() && pq.top().second<=i-k) pq.pop();
            pq.push({nums[i],i});
            if(i>=k-1) ans.push_back(pq.top().first);
        }
        return ans;
    }
};