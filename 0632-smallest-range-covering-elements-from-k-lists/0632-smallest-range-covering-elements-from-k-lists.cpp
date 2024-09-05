class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        int minimum=0;
        int maximum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i][0],{i,0}});
            maximum=max(maximum,nums[i][0]);
        }
        minimum=pq.top().first;

        vector<int>ans(2);
        ans[0]=minimum;
        ans[1]=maximum;

        while(pq.size()==nums.size()){
            // int element=pq.top().first;  // Not required
            int i=pq.top().second.first;
            int j=pq.top().second.second;
            pq.pop();
            if(j+1<nums[i].size()){
                pq.push({nums[i][j+1],{i,j+1}});
                maximum=max(maximum,nums[i][j+1]);
                minimum=pq.top().first;
                if(maximum-minimum<ans[1]-ans[0]){
                    ans[0]=minimum;
                    ans[1]=maximum;
                }
            }
        }
        return ans;
    }
};