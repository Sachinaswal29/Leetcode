class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        // int maxProf=0;
        // sort(worker.begin(),worker.end(),greater<int>());
        // priority_queue<pair<int, int>> pq;
        // for(int i=0;i<difficulty.size();i++){
        //     pq.push({profit[i],difficulty[i]});
        // }
        // for(auto w:worker ){
        //     while(!pq.empty() && pq.top().second > w) pq.pop();
        //     if(!pq.empty()) maxProf+=pq.top().first;
        // }
        // return maxProf;

        vector<pair<int,int>>vec;
        for(int i=0;i<difficulty.size();i++){
            vec.push_back({difficulty[i],profit[i]});
        }
        sort(vec.begin(),vec.end());
        sort(worker.begin(),worker.end());

        int j=0;
        int totalProfit=0;
        int maxProfit=0;
        for(auto w:worker){
            while(j<difficulty.size() && w>=vec[j].first){
                maxProfit=max(maxProfit,vec[j].second);
                j++;
            }
            totalProfit+=maxProfit;
        }
        return totalProfit;
    }
};