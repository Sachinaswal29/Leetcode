class Solution {
public:
    // TC- O(Nlogk)
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i][0],{i,0}});
            maxi=max(maxi,nums[i][0]);
        }
        int mini=pq.top().first;
        vector<int>ans(2,0);
        ans[0]=mini;
        ans[1]=maxi;

        while(pq.size()==nums.size()){
            int i=pq.top().second.first;
            int j=pq.top().second.second;
            pq.pop();
            if(j+1<nums[i].size()){
                pq.push({nums[i][j+1],{i,j+1}});
                maxi=max(maxi,nums[i][j+1]);
                mini=pq.top().first;
                if(maxi-mini<ans[1]-ans[0]){
                    ans[0]=mini;
                    ans[1]=maxi;
                }
            }
        }
        return ans;
    }
};