class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        for(auto&ch:word) mp[ch]++;
        priority_queue<int>pq;
        for(auto& x:mp) pq.push(x.second);
        int push=1;
        int count=1;
        int ans=0;
        while(!pq.empty()){
            ans+=pq.top()*push;
            pq.pop();
            count++;
            if(count==9){
                push++;
                count=1;
            }
        }
        return ans;
    }
};