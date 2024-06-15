class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>>cp;
        for(int i=0;i<profits.size();i++){
            cp.push_back({capital[i],profits[i]});
        }
        sort(cp.begin(),cp.end());
        int i=0;
        priority_queue<int>pq;
        while(k--){
            while(i<cp.size() && cp[i].first<=w){
                pq.push(cp[i].second);
                i++;
            }
            if(pq.empty()) break;
            w+=pq.top();
            pq.pop();
        }
        return w;
    }
};