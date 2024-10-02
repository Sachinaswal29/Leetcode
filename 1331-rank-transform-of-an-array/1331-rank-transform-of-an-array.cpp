class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {  
        int n=arr.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<n;i++) pq.push({arr[i],i});
        vector<int>ans(n,0);
        int count=0,prev=INT_MIN;
        while(!pq.empty()){
            int index=pq.top().second;
            int element=pq.top().first;
            if(element>prev){
                count++;
                prev=element;
            }
            ans[index]=count;
            pq.pop();
        }
        return ans;
    }
};